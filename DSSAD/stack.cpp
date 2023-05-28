#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    Node* next;
};

Node* initStack()
{
    Node* s = new Node;
    s->data = 0;
    s->next = nullptr;
    return s;
}

int isEmpty(Node* s)
{
    if (s->data == 0 || s->next == nullptr)
    {
        return 1;
    }
    return 0;
}

int pop(Node* s)
{
    if (isEmpty(s))
    {
        return -1;
    }
    Node* node = s->next;
    s->next = node->next;
    return s->next->data;
}

void push(Node* s, int data)
{
    Node* node = new Node;
    node->data = data;
    node->next = s->next;
    s->next = node;
    s->data++;
}
void printStack(Node* s)
{
    Node* node = s->next;
    while (node)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL");
    
}

int main()
{
    Node* s = initStack();
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printStack(s);
    return 0;
}