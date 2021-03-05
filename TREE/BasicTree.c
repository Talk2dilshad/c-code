#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Windows 8.1\Documents\c\TREE\Queue.h"
struct node *root = NULL;

void Treecreate()
{
    struct node *p,*t;
    int x;

    struct Queue q;
    create(&q,100);

    printf("Enter the root value");
    scanf("%d",&x);

    root = (struct node *)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild= NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
        p=dequeue(&q);
        printf("Enter the left child of %d : ",p->data);
        scanf("%d",&x);

        if(x != -1)
        {
            t=(struct node * )malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild= NULL;
            p->lchild=t;
            enqueue(&q,t);
        }


        printf("Enter the Right child  %d : ",p->data);
        scanf("%d",&x);

        if(x != -1)
        {
            t=(struct node * )malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild= NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}  
  
void preorder(struct node *p)
{
    
    if(p)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
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

void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ",p->data);
    }
}

int main()
{
    Treecreate();
    printf("\nPreOrder :  ");
    preorder(root);
    printf("\nInOrder :  ");
    inorder(root);
    printf("\nPostOrder :  ");
    postorder(root);
    return 0;
}