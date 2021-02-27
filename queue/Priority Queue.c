#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int priority;
    int data;
    struct node *next;
}NODE;
NODE *front = NULL;

void insert(int item,int priority)
{
    NODE *temp,*q;
    
    temp=(NODE *)malloc(sizeof(NODE));
    temp->data=item;
    temp->priority=priority;

    if(front== NULL || priority <front->priority)
    {
        temp->next=front;
        front=temp;
    }
    else
    {
        q=front;
        while(q->next !=NULL && q->next->priority <= priority)
              q=q->next;
            temp->next=q->next;
            q->next=temp;
    }
}

void del()
{
    NODE *temp;
    if(front==NULL)
        printf("Queue Underflow\n");
    else
    {
        temp=front;
        printf("Deleted Item is %d\n",temp->data);
        front=front->next;
        free(temp);
    }
}

void display()
{
    NODE *ptr;
    ptr = front;
    if(front==NULL)
    printf("Queue is empty\n");
    else
    {
        printf("\n\nQueue :\n");
        printf("Item  ---> priority\n");
        while(ptr !=NULL)
        {
            printf("%4d  ---> %4d\n",ptr->data,ptr->priority);
            ptr=ptr->next;
        }
    }
}

int main()
{
    int choice,item,priority;
    do
    {
        printf("\n\n1 -> Insert\n");
        printf("2 -> Delete\n");
        printf("3 -> Display\n");
        printf("4 -> Quit\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Add item in the Queue : ");
            scanf("%d",&item);
            printf("Enter its priority : ");
            scanf("%d",&priority);
            insert(item,priority);
            break;
            case 2:
            del();
            break;
            case 3: 
            display();
            break;
            case 4:
            break;
            default :
            printf("Wrong choice \n");
        }
    }
    while(choice != 4);
    return 0;
}
