#ifndef Queue_h
#define Queue_h

struct node
{
    struct node *lchild;
    struct node *rchild;
    int data;
};
struct Queue
{
    int size;
    int front; //To remove an element 
    int rear; //to add an element
    struct node **Q; // Dynamic Array 
};
void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear= 0;
    q->Q=(struct node **)malloc(q->size*sizeof(struct node *));

}
void enqueue(struct Queue *q,struct node *x)
{
 if((q->rear+1)%q->size==q->front)
 printf("Queue is Full");
 else
 {
 q->rear=(q->rear+1)%q->size;
 q->Q[q->rear]=x;
 }
}
struct node* dequeue(struct Queue *q)
{
    struct  node* x=NULL;
    if(q->front==q->rear)//checking  if  queue is empty
    printf("Queue Underflow\n");
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    } 
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front== q.rear;
}
#endif