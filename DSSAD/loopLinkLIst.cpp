#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct Node
{
    int data;
    Node* next;
};
Node* initList()
{
    Node* l = new Node;
    l->data = 10;
    l->next = l;
    return l;
}

void headInsert(Node* l, int data)
{
    Node* node = new Node;
    node->data = data;
    node->next = l->next;
    l->next = node;
}

void tailInsert(Node*l, int data)
{
    Node* node = new Node;
    node->data = data;
    Node* current = l;
    while (current->next != l)
    {
        current = current->next;
    }
    current->next = node;
    node->next = l;
    
}

int del_link(Node* l, int data)
{
    Node* current = l;
    while (current->next != l)
    {
        if (current->next->data == data)
        {
            current->next = current->next->next;
            return TRUE; 
        }
        current = current->next;
    }
    return FALSE;
    
}

void printNode(Node* l)
{
    Node* node = l->next;
    while (node)
    {
        printf("%d->", node->data);
        
        node = node->next;
        if (node == l)
        {
            break;
        }
    }
    printf("NULL");
    
}

int main()
{
    Node* l = initList();
    headInsert(l, 1);
    headInsert(l, 2);
    headInsert(l, 3);
    headInsert(l, 4);
    headInsert(l, 5);
    tailInsert(l, 9);
    tailInsert(l, 8);

    tailInsert(l, 7);
    tailInsert(l, 6);

    del_link(l, 8);
    del_link(l, 3);
    printNode(l);
}