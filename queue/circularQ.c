#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q)
{
    printf("Enter the Circular Queue size : ");
    scanf("%d",&q->size);
    q->Q=(int *)malloc(q->size*sizeof(int)); // initialize Array[Q]

    q->front=q->rear= 0;
    
}

void enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
        printf("Overflow\n");
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
        printf("Underflow\n");
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct Queue q)
{
    printf("\nDisplay Queue\n");
    int i=q.front+1;

    do
    {
    printf("%d ",q.Q[i]);
    i=(i+1)%q.size;        
    }
    while(i != (q.rear+1)%q.size);
    printf("\n");
}
int main()
{
    struct Queue q;

    create(&q);

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    
    display(q);
    printf("Dequeue Element -> %d \n",dequeue(&q));
    enqueue(&q,6);
    display(q);
}