#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    char data;
    TreeNode* lchild;
    TreeNode* rchild;
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

void preOrder(TreeNode* T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        // 先办事，再处理左右孩子
        printf("%c ", T->data);
        preOrder(T->lchild);
        preOrder(T->rchild);
    }
}

void inOrder(TreeNode* T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        // 先左，再办事，最后右
        inOrder(T->lchild);
        printf("%c ", T->data);
        inOrder(T->rchild);
    }
}

void postOrder(TreeNode* T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        // 先左，再右，最后办事
        postOrder(T->lchild);
        postOrder(T->rchild);
        printf("%c ", T->data);
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
    postOrder(T);
    printf("\n");
    return 0;
}