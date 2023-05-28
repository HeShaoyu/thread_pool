#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    Node* pre;
    Node* next;
};

Node* initList()
{
    Node* l = new Node;
    l->data = 0;
    l->pre = l;
    l->next = l;
    return l;
}

void headInsert(Node* l, int data)
{
    Node* node = new Node;
    node->data = data;
    if (l->data == 0)
    {
        //链表为空
        node->pre = l;
        node->next = l;
        l->pre = node;
        l->next = node;
        l->data++;
        return;
    }
    node->pre = l;
    node->next = l->next;
    l->next->pre = node;
    l->next = node;
    l->data++;
}

void tailInsert(Node* l, int data)
{
    Node* node = l;
    Node* n = new Node;
    n->data = data;
    while (node->next != l)
    {
        node = node->next;
    }
    n->pre = node;
    n->next = l;
    node->next = n;
    l->pre = n;
    l->data++;

}
void deleteOne(Node* l, int data)
{
    Node* node = l->next;
    while (node != l)
    {
        if (node->data == data)
        {
            node->pre->next = node->next;
            node->next->pre = node->pre;
            l->data--;
            return;
        }
        node = node->next;
    }
    
}

void printList(Node* l)
{
    Node* node = l->next;
    while (node != l)
    {
        printf("%d -> ", node->data);
        node = node->next;
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
    tailInsert(l, 8);
    tailInsert(l, 8);
    tailInsert(l, 4);
    tailInsert(l, 8);
    deleteOne(l, 3);
    deleteOne(l, 1);
    printList(l);
    return 0;
}
