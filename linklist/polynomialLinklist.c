#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    int coeff;
    int exponent;
    struct node *next;
}*poly=NULL;

void create()
{
    struct node *t,*last=NULL;
    int num,i;

    printf("Enter number of terms: ");
    scanf("%d",&num);
    for(i=1;i<=num; i++)
    {
         printf("Enter %d term with coeff and exponent : ",i);
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d%d",&t->coeff,&t->exponent);
        t->next=NULL;
        if(poly==NULL)
        {
            poly=last=t;
        }
        else{
            last->next=t;
            last=t;
        }
    }
}

void display(struct node * poly)
{
    while(poly)
    {
        printf("%dx^%d ",poly->coeff,poly->exponent);
        if(poly->next != NULL)
        {
        printf("+ ");
        }
        poly=poly->next;
    }
    printf("\n");
}
void Eval(struct node* p, int x)
{
    long value=0;
    while(p)
    {
        value += poly->coeff*pow(x,p->exponent);
        p=p->next;
    }
    printf("Evaluation value of polynomial ");
    printf(":  %ld\n",value);
}
int main()
{
    int n;
    create();
    display(poly);
    printf("enter the value of x to evaluate ...\n: ");
    scanf("%d",&n);
    Eval(poly,n);
    return 0;
}
