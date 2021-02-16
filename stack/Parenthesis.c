#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node* next;
}*top=NULL;


void push(char x)
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
char pop()
{
    struct node *t;
    int x=-1;
    if(top==NULL)
      printf("Stack Underflow");
    else
    {
        t=top;
        top=top->next;
  //      printf("\nPoped element : %s\n",t->data);
        x=t->data;
        free(t);
    }
     return x; 
}

int balanced(char  *exp)
{
    for(int i=0;exp[i]!= '\0'; i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
    return 1;
    else
    return 0;
}
int main()
{
  char *exp="(a+b)*(c-d))";
  printf("%d ",balanced(exp));
    return 0;
}
