#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front; //To remove an element 
    int rear; //to add an element
    int *Q; // Dynamic Array 
};
void create(struct Queue *q)
{
    printf("Enter the size of Queue : ");
    scanf("%d",&q->size);
    q->Q=(int *)malloc(q->size*sizeof(int));
    q->front=q->rear= -1;
}
void enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        printf("\nQueue Overflow\n");
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)//checking  if  queue is empty
    printf("Queue Underflow");
    else
    {
        q->front++;
        x=q->Q[q->front];
    } 
    return x;
}
void display(struct Queue q)
{
    printf("\nDisplay Queue\n");
    for(int i=q.front+1;i<=q.rear; i++)
    printf("%d ",q.Q[i]);
    printf("\n");
}
int main()
{
    struct Queue q;
    create(&q);

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    display(q);

 printf("Dequeue element -> %d \n",dequeue(&q));
}