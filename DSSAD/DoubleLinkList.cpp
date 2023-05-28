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
    l->pre = nullptr;
    l->next = nullptr;
    return l;
}

void headInsert(Node* l, int data)
{
    Node* node = new Node;
    node->data = data;
    if (l->data == 0)
    {
        //链表为空
        node->next = l->next;
        node->pre = l;
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
    Node* n = new Node;
    Node* node = l;
    n->data = data;
    while (node->next)
    {
        node = node->next;
    }
    n->next = node->next;
    node->next = n;
    n->pre = node;
    l->data++;
    
}

void printList(Node* l)
{
    Node* node = l->next;
    while (node)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
    
}

void deleteOne(Node* l, int data)
{
    Node* node = l->next;

    while (node)
    {
        if(node->data == data)
        {
            //删除
            Node* l1 = node->pre;
            Node* l2 = node->next;
            l1->next = l2;
            l2->pre = l1;
            free(node);
            return;
        }
        node = node->next;
    }
    
}

int main()
{
    Node* l = initList();
    headInsert(l, 10);
    headInsert(l, 9);
    headInsert(l, 8);
    headInsert(l, 7);
    tailInsert(l, 3);
    tailInsert(l, 2);
    tailInsert(l, 5);
    deleteOne(l, 8);
    printList(l);
    return 0;
}