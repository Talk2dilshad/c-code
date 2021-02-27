#include <stdio.h>
#include <stdlib.h>
// stack node 
struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node* stack1;
    struct node* stack2;
};

void push(struct node** top,int x)
{
    struct node* new_node= (struct node*) malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("stack Overflow\n");
        exit(0);
    }
    new_node->data= x; //put in data 
    new_node->next= *top; //link the old list off the new node
    *top= new_node; 
}

int pop(struct node **  top)
{
    struct node *copy_top; // to copy data of top pointer
    int x; //store the value of top pointer 
     /*If stack is empty then error */
    if(*top == NULL)
    {
        printf("Underflow\n");
        exit(0);
    }

    else
    {
        copy_top=*top;
        x = copy_top->data;

        *top=copy_top->next;
        free(copy_top);
        return x;
    }

}

void enqueue(struct queue *q, int x)
{
    push(&q->stack1,x);
}

int dequeue(struct queue *q)
{
    int x;
    
    if(q->stack1 == NULL &&  q->stack2 == NULL)
    {
        printf("Queue is empty\n");
        exit(0);
    }
    
    if(q->stack2== NULL)
    {
        while(q->stack1 != NULL)
        {
            x=pop(&q->stack1);
            push(&q->stack2,x);
        }
    }

    x = pop(&q->stack2); 
    return x; 
}

int main()
{
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    q->stack1=NULL;
    q->stack2=NULL;

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);

    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));


    return 0;
}