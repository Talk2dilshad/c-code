#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    struct node *lchild;
    struct node *rchild;
    int data;
}*root=NULL;
struct node *CreateBST(struct node *p,int data);

void create(int data)
{
    root=CreateBST(root,data);
}

struct node *CreateBST(struct node *p,int data)
{
    
    if(p==NULL)
    {  
        p=(struct node *)malloc(sizeof(struct node));
        p->data=data;
        p->lchild=p->rchild=NULL;
    }

    
    if( p->data > data )
        p->lchild=CreateBST(p->lchild,data);
    else if(p->data < data )
        p->rchild=CreateBST(p->rchild,data);

    return p;    
}
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}

int main()
{
    int pre[] = { 10, 5, 1, 7, 40, 50 };
    int size = sizeof(pre) / sizeof(pre[0]);
    for(int i=0; i<size; i++)
    {
        create(pre[i]);
    }
    inorder(root);
    return 0;
}