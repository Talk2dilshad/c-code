#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node *lchild;
    struct node *rchild;
    int data;
    int height;
}*root=NULL;

int nodeheight(struct node *p)
{
    int hl; // height of left subtree 
    int hr; // height of right subtree 
    hl= p && p->lchild ? p->lchild : 0; //if p is not null & p left child is there then take height of p left child or else take 0
    hr= p && p->rchild ? p->rchild : 0; //if p is not null & p right child is there then take height of p right child or else take 0
    return hl > hr ? hl+1 : hr+1;
}

int balancefactor(struct node *p)
{
    int hl; // height of left subtree 
    int hr; // height of right subtree 
    hl= p && p->lchild ? p->lchild : 0; //if p is not null & p left child is there then take height of p left child or else take 0
    hl= p && p->rchild ? p->rchild : 0; //if p is not null & p right child is there then take height of p right child or else take 0
    return hl-hr;
}

struct node * LLROTATION(struct node *p)
{
    struct node * pl=p->lchild;
    struct node * plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr; 
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);

    if(root==p)
    root=pl;

    return pl;
}

struct node *LRROTATION(struct node *p)
{
    struct node* pl=p->lchild; //pl mean left subtree of root p
    struct node* plr=pl->rchild;
    //changing the directory 
    p->lchild=plr->rchild;
    pl->rchild=plr->lchild;

    plr->lchild=pl;
    plr->rchild=p;

    //update height
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    plr->height=nodeheight(plr);

    //update root directory

    if(root==p)
    {
        root=plr;
    }

    return plr;
}

struct node *RRROTATION(struct node *p)
{
    struct node * pl=p->rchild;
    struct node * plr=pl->lchild;

    pl->lchild=p;
    p->rchild=plr; 
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);

    if(root==p)
    root=pl;

    return pl;
}

struct node *RLROTATION(struct node *p)
{
    struct node* pl=p->rchild; //pl mean left subtree of root p
    struct node* plr=pl->lchild;
    //changing the directory 
    p->rchild=plr->lchild;
    pl->lchild=plr->rchild;
    plr->rchild=pl;
    plr->lchild=p;

    //update height
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    plr->height=nodeheight(plr);

    //update root directory

    if(root==p)
    {
        root=plr;
    }

    return plr;

}

struct node *RecursiveInsertion(struct node *p,int key)
{
    struct node *t=NULL;//allocate memory add key to it and return it to root 
    if(p==NULL)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=key;
        t->height=1;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key<p->data)
        p->lchild=RecursiveInsertion(p->lchild,key);
    else if(key > p->data)
        p->rchild=RecursiveInsertion(p->rchild,key);

    p->height = nodeheight(p);

    if(balancefactor(p)==2 && balancefactor(p->lchild)==1)
    return LLROTATION(p);

    else if(balancefactor(p)==2 && balancefactor(p->lchild)==-1)
    return LRROTATION(p);
    
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==-1)
    return RRROTATION(p);
    
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==1)
    return RLROTATION(p);
    



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
    while(p && p->rchild)
    p=p->rchild;
    return p;
}
struct node *InorderSucc(struct node *p){
    while(p && p->lchild)
    p=p->lchild;
    return p;
}

// Recursive function to delete a node with given key 
// from subtree with given root. It returns root of 
// the modified subtree. 
struct node  *delete(struct node* p, int key) 
{ 
    struct node *q; //store temporary data 
	
    if(p==NULL) return NULL;

    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
        root=NULL;
        free(p);
        return NULL;
    }
    if(key < p->data)
        p->lchild=delete(p->lchild,key);
    else if(key > p->data)
        p->rchild=delete(p->rchild,key);
    else
    //searching and replacement of node by height 
    if(height(p->lchild) > height(p->rchild))
    {
        q=InorderPre(p->lchild);
        p->data=q->data;
        p->lchild=delete(p->lchild,q->data);
    }
    else if(height(p->lchild) < height(p->rchild))
    {
        q=InorderPre(p->rchild);
        p->data=q->data;
        p->rchild=delete(p->rchild,q->data);
    }
    
    // step 1 if the tree had only one node then return 
    if(p==NULL)
    return p;

    // step 2 update the height of the current node
    p->height=nodeheight(p);

	// If this node becomes unbalanced, then there are 4 cases 

	// Left Left Case 
	if (balancefactor(p)> 1 && balancefactor(p->lchild) >= 0) 
	return LLROTATION(p); 

	else if(balancefactor(p)==2 && balancefactor(p->lchild)==-1)
    return LRROTATION(p);
    
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==-1)
    return RRROTATION(p);
    
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==1)
    return RLROTATION(p);

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
    root=RecursiveInsertion(root,9);
    RecursiveInsertion(root,5);
    RecursiveInsertion(root,10);
    RecursiveInsertion(root,0);
    RecursiveInsertion(root,6);
    RecursiveInsertion(root,11);
    RecursiveInsertion(root,-1);
    RecursiveInsertion(root,1);
    RecursiveInsertion(root,2);
    delete(root,10);
    inorder(root);
    return 0;
}