#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    struct node *rchild;
    int data;
}*root=NULL;

void insert(int key)
{
    struct node *t=root;
    // * r is tail pointer & *p create new node
    struct node *r,*p;

    if(root==NULL)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p; //copy p data into root
        return;
    }
    while(t !=NULL)
    {
        r=t; //tailing pointer to a node
        if(key< t->data)
            t=t->lchild;
        else if(key > t->data)
            t=t->rchild;
        else
            return;         
    }//after reaching end point of tree, new node will be added by the tailing node .
        p=(struct node *)malloc(sizeof(struct node));
        p->data=key;
        p->lchild=p->rchild=NULL;

    if(key< r->data )
        r->lchild=p;
    else
    r->rchild=p;    
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
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);

    inorder(root);
    printf("\n");
    return 0;
}