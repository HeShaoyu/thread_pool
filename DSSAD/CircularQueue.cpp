#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 5

struct Queue
{
    int front;
    int rear;
    int data[MAXSIZE];
};

Queue* initQueue()
{
    Queue* q = new Queue;
    q->front = q->rear = 0;
    return q;
}

int isFull(Queue* q)
{
    return (q->rear + 1) % MAXSIZE == q->front;
}
int isEmpty(Queue* q)
{
    return q->front == q->rear;
}

int enQueue(Queue* q, int data)
{
    if (isFull(q))
    {
        return -1;
    }
    q->data[q->rear] = data;
    q->rear = (q->rear + 1) % MAXSIZE;
    return 1;
}

int deQueue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    int data = q->data[q->front];
    q->front = (q->front+1) % MAXSIZE;
    return data;
    
}

void printQueue(Queue* q)
{
    if (isEmpty(q))
    {
        printf("Empty");
    }
    int length = (q->rear - q->front + MAXSIZE) % MAXSIZE;
    int index = q->front;
    for (int i = 0; i < length; i++)
    {
        printf("%d -> ", q->data[index]);
        index = (index + 1) % MAXSIZE;
    }

}

int main()
{
    Queue* q = initQueue();
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    enQueue(q, 4);
    deQueue(q);
    printQueue(q);
    return 0;
}