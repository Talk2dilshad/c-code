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
        p=(struct node *)malloc(sizeof(struct node));
        p->data=key;
        p->lchild=p->rchild=NULL;

    if(root==NULL)
    {
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
struct node *RecursiveInsertion(struct node *p,int key)
{
    struct node *t=NULL;//allocate memory add key to it and return it to root 
    if(p==NULL)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key<p->data)
        p->lchild=RecursiveInsertion(p->lchild,key);
    else if(key > p->data)
        p->rchild=RecursiveInsertion(p->rchild,key);

    return p;

}
int  height(struct node *root)
{
    int x, y;
    if(root==NULL) return 0;
    x=height(root->lchild);
    y=height(root->rchild);
    return x>y ? x+1: y+1;
}
struct node *InorderPre(struct node *p)
{
    while(p && p->rchild !=NULL)
        p=p->rchild;
    return p; 
}

struct node *InorderSucc(struct node *p)
{
    while(p && p->lchild !=NULL)
        p=p->lchild;
    return p; 
}


struct node *delete(struct node *p,int key)
{
    struct node *q; //  element of Inorder Predeccesor /Inorder Successor is stored
    if(p==NULL)
    return NULL;
    if(p->lchild == NULL && p-> rchild==NULL)
    {
        if(p==root)
        root=NULL;
        free(p);
        return NULL;
    }
    //searching for element to be deleted from the tree
    if(key < p->data)
        p->lchild=delete(p->lchild,key);
    else if(key > p->data)
        p->rchild=delete(p->rchild,key);
    else// after searching ,height will decide which node should be there instead of deleting node..
            if(height(p->lchild) > height(p->rchild))
        {
            q=InorderPre(p->lchild);
            p->data=q->data;
            p->lchild=delete(p->lchild,q->data);
        }
        else
        {
            q=InorderSucc(p->rchild);
            p->data=q->data;
            p->rchild=delete(p->rchild,q->data);
        }
    return p; 
}
int main()
{
    //insert func is disabled for RecursiveInsert func()
    // insert(10);
    // insert(5);
    // insert(20);
    // insert(8);
    // insert(30);
    root=RecursiveInsertion(root,10);
    RecursiveInsertion(root,5);
    RecursiveInsertion(root,20);
    RecursiveInsertion(root,8);
    RecursiveInsertion(root,50);

    delete(root,20);

    inorder(root);
    printf("\n");
    return 0;
}