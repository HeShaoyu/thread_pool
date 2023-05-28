#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <semaphore.h>

// 生产者，消费者信号量
sem_t semp;
sem_t semc;
pthread_mutex_t mutex;

//链表
struct Node
{
    int number;
    Node* next;

};

//头节点
Node* head = NULL;

//生产者
void* producer(void* arg)
{
    while(1)
    {
        sem_wait(&semp);
        pthread_mutex_lock(&mutex);
        // 创建节点
        Node* newNode = (Node*)malloc(sizeof(Node));
        //初始化节点
        newNode->number = rand() % 1000;
        newNode->next = head;
        head= newNode;
        printf("生产者: id: %ld, number: %d\n", pthread_self(), newNode->number);
        pthread_mutex_unlock(&mutex);
        sem_post(&semc);
        sleep(rand() % 3);
    }
    return NULL;
}

void* consumer(void* arg)
{
    while(1)
    {
        sem_wait(&semc);
        pthread_mutex_lock(&mutex);
        Node* node = head;
        printf("消费者， id: %ld, number: %d\n", pthread_self(), node->number);
        head = head->next;
        free(node);
        pthread_mutex_unlock(&mutex);
        sem_post(&semp);
        sleep(rand() % 3);
    }
    return NULL;
}

int main()
{
    pthread_mutex_init(&mutex, NULL);
    // 生产者 
    sem_init(&semp, 0, 5);
    // 消费者 资源初始化为0
    sem_init(&semc, 0, 0);
    pthread_t t1[5], t2[5];
    for (int i = 0; i < 5; i++)
    {
        pthread_create(&t1[i], NULL, producer, NULL);
    }
    for (int i = 0; i < 5; i++)
    {
        pthread_create(&t2[i], NULL, consumer, NULL);
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_join(t1[i], NULL);
        pthread_join(t2[i], NULL);
    }

    pthread_mutex_destroy(&mutex);

    sem_destroy(&semp);
    sem_destroy(&semc);

    return 0;
}