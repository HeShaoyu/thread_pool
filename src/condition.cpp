#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

pthread_cond_t cond;
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
        sleep(10);
        pthread_mutex_lock(&mutex);
        // 创建节点
        Node* newNode = (Node*)malloc(sizeof(Node));
        //初始化节点
        newNode->number = rand() % 1000;
        newNode->next = head;
        head= newNode;
        printf("生产者: id: %ld, number: %d\n", pthread_self(), newNode->number);
        pthread_mutex_unlock(&mutex);
        pthread_cond_signal(&cond);
        sleep(rand() % 3);
    }
    return NULL;
}

void* consumer(void* arg)
{
    while(1)
    {
        pthread_mutex_lock(&mutex);
        while(head == NULL)
        {
            // 阻塞消费者线程
            printf("消费者阻塞，id: %ld\n", pthread_self());
            pthread_cond_wait(&cond, &mutex);
        }
        Node* node = head;
        printf("消费者， id: %ld, number: %d\n", pthread_self(), node->number);
        head = head->next;
        free(node);
        pthread_mutex_unlock(&mutex);
        sleep(rand() % 3);
    }
    return NULL;
}

int main()
{
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

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
    pthread_cond_destroy(&cond);



    return 0;
}