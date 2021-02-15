#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct  stack *st)
{
    printf("Enter the size : ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}
void display(struct stack st)
{
    printf("\nDisplaying stack data......\n\n");

    for(int i=st.top;i>=0;i--)
    {
        printf("[%d]\n",st.s[i]);
    }
    printf("\n");
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
        printf("Stack Overflow\n");
    else
    {
        st->top++;
        st->s[st->top]=x;
    }    
}
int pop(struct stack *st)
{
    int x= -1;
    if(st->top==-1)
        printf("Invalid Index\n");
    else
    {
    x=st->s[st->top--];
    }
    return x;
}
void peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
        printf("Invalid Index \n");
    else
   { x=st.s[st.top-index+1];
    printf("\nItem at index %d is %d \n",index,x);
   }
}
int isEmpty(struct stack st)
{
    if(st.top==-1)
     return 1;
     return 0;
}
int isFull(struct stack st)
{
    return (st.top==st.size-1);
}
int stacktop(struct stack st)
{
    if(!isEmpty(st))
        return st.s[st.top];
    return -1;
}
int main()
{
    struct stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    
    peek(st,1);

    display(st);
    printf("\npoped out : %d  \n",pop(&st));

    printf("stacktop Element %d\n",stacktop(st));
    printf("Stack is Full ? %d\n",isFull(st));

    display(st);
    return 0;
}