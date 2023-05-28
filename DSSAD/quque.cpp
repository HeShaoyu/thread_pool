#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    Node* next;
};

Node* initQueue()
{
    Node* node = new Node;
    node->data = 0;
    node->next = nullptr;
    return node;
}

void enQueue(Node* q, int data)
{
    Node* node = new Node;
    node->data = data;
    Node* Q = q;
    for (int i = 0; i < q->data; i++)
    {
        Q = Q->next;
    }
    Q->next = node;
    node->next = nullptr;
    q->data++;
}

int isEmpyt(Node* q)
{
    if (q->data == 0 || q->next == nullptr)
    {
        return 1;
    }
    return 0;
}

int deQueue(Node* q)
{
    if (isEmpyt(q))
    {
        return -1;
    }
    Node* node = q->next;
    q->next = node->next;
    return node->data;
}

void printQueue(Node* q)
{
    Node* node = q->next;
    while (node)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("null");
}


int main()
{
    Node* node = initQueue();
    enQueue(node, 1);
    enQueue(node, 2);
    enQueue(node, 3);
    enQueue(node, 4);
    deQueue(node);
    deQueue(node);
    printQueue(node);
    return 0;
}