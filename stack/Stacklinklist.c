#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*top=NULL;


void push(int x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));

    if(t==NULL)
        printf("Stack Overflow\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
void pop()
{
    struct node *t;

    if(top==NULL)
      printf("Stack Underflow");
    else
    {
        t=top;
        top=top->next;
        printf("\nPoped element : %d\n",t->data);
        free(t);
    }
}
void display()
{
    struct node *p;
    p=top;
    printf("Displaying stack vai linklist :\n");
    while(p!=NULL)
    {
        printf("[%d]\n",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);


    display();
    pop();
    display();
    return 0;
}
