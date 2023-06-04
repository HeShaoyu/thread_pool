#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    char data;
    TreeNode* lchild;
    TreeNode* rchild;
};

struct Stack
{
    TreeNode* data;
    Stack* next;
};

void createTree(TreeNode** T, char* data, int* index)
{
    //创建二叉树逻辑
    char ch;
    ch = data[*index];
    *index += 1;
    if (ch == '#')
    {
        //此时根节点为空
        *T = NULL;
    }
    else
    {
        *T = (TreeNode*)malloc(sizeof(TreeNode));
        (*T)->data = ch;
        // 创建左右子树，和创建树的逻辑一致，递归操作
        createTree(&((*T)->lchild), data, index);
        createTree(&((*T)->rchild), data, index);
    }
}
Stack* initStack()
{
    Stack* S = (Stack*)malloc(sizeof(Stack));
    S->data = NULL;
    S->next = NULL;
    return S;
}

void push(TreeNode* data, Stack* S)
{
    Stack* node = (Stack*)malloc(sizeof(Stack));
    node->data = data;
    node->next = S->next;
    S->next = node;
}

int isEmpty(Stack* S)
{
    if (S->next == NULL)
    {
        return 1;
    }
    return 0;
}

Stack* pop(Stack* S)
{
    if (isEmpty(S))
    {
        return NULL;
    }
    Stack* node = S->next;
    S->next = node->next;
    return node;
}

void preOrder(TreeNode* T)
{
    TreeNode* node = T;
    Stack* S = initStack();
    while (node || !isEmpty(S))
    {
        if (node)
        {
            printf("%c ", node->data);
            push(node, S);
            node = node->lchild;
        }
        else
        {
            node = pop(S)->data;
            node = node->rchild;
        }
    }
    
}

void inOrder(TreeNode* T)
{
    TreeNode* node = T;
    Stack* S = initStack();
    while (node || !isEmpty(S))
    {
        if (node)
        {
            
            push(node, S);
            node = node->lchild;
        }
        else
        {
            node = pop(S)->data;
            printf("%c ", node->data);
            node = node->rchild;
        }
    }
    
}

int main(int argc, char* argv[])
{
    TreeNode* T;
    char data[] = "ABD##E##CF##G##";
    // const char* data = "hello, world #";
    // int num[] = {1, 2, 3, 4};
    int index = 0;
    // createTree(&T, argv[1], &index);
    createTree(&T, data, &index);
    preOrder(T);
    printf("\n");
    inOrder(T);

    printf("\n");
    return 0;
}