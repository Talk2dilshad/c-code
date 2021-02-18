#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

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
   //     printf("\nPoped element : %s\n",t->data);
        x=t->data;
        free(t);
    }
     return x; 
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
int pre(char x)
{
    if(x=='+' || x == '-' )
    return 1;
    else if(x=='*' || x == '/' )
    return 2;
    else if( x== '^')
    return 3;
    else return 0;
}
int isOperand(char x)
{
    if(x== '+' || x== '-' || x== '*' || x== '/' || x=='^' )
    return 0;
    else 
    return 1;
}
char * InToPostfix(char *infix)
{
    int i=0,j=0;
    char  *postfix;
    int len= strlen(infix);
    postfix=(char *)malloc((len+1)*sizeof(char));

    while(infix[i] !='\0')
    {
        if(isOperand(infix[i]))
        postfix[j++]=infix[i++];
        else
        {
            if(pre(infix[i]) > pre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++]=pop();
            }
        }
    }
    while( top != NULL)
        postfix[j++]=pop();
    postfix[j]='\0';
    return postfix;
}
int Eval(char *postfix)
{
    int i=0;
    int x1,x2,r=0;
    for(i=0; postfix[i] != '\0'; i++)
    {
        if(isOperand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            x2=pop();
            x1=pop();
            switch(postfix[i])
            {
                case '+' : r=x1+x2; break;
                case '-' : r=x1-x2; break;
                case '*' : r=x1*x2; break;
                case '/' : r=x1/x2; break;
            }
            push(r);
        }
    }
    return top->data;
}
int main()
{
//    char  *infix = "56+";
    push(' ');
    // char *postfix=InToPostfix(infix);
    char *postfix="56+";
    printf("%s \n",postfix);
    printf("RESULT -> %d \n",Eval(postfix));
    return 0;
}