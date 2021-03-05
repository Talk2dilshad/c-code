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
int checkpair(char character1,char character2)
{
   if (character1 == '(' && character2 == ')') 
        return 1; 
    else if (character1 == '{' && character2 == '}') 
        return 1; 
    else if (character1 == '[' && character2 == ']') 
        return 1; 
    else
        return 0; 
}

int balanced(char  *exp)
{
    
    for(int i=0 ; exp[i] != '\0'; i++)
    {
      if(exp[i]== '{' || exp[i]== '(' || exp[i]== '[' )  
      {
        push(exp[i]);
      }
       // If exp[i] is an ending bracket then pop from 
        // stack and check if the popped bracket is a 
        // matching pair*/
         if(exp[i]== '}' || exp[i]== ')' || exp[i]== ']' )  
      {
        if(top==NULL)
            return 0;
            // Pop the top element from stack, if it is not 
            // a pair bracket of character then there is a 
            // mismatch. 
            // is happens for expressions like {(})
        else if(!checkpair(pop(),exp[i]))
        return 0;
      }
    
    }
    if(top==NULL)
    return 1;
    else
    return 0;
}
int main()
{
  char *exp="{[]()}";
  printf("%d ",balanced(exp));
    return 0;
}
