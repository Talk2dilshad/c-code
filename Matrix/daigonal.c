#include <stdio.h>
#include <stdlib.h>
/*
*create structure of array to store daigonal data;
*create func() get and sets
*create display func()
*/
struct Matrix
{
    int A[10];
    int ed;//element in daigonal
};
void set(struct Matrix *m,int i,int j,int x)
{
    if(i==j)
    {
      m->A[i-1]=x;
    }
}
int get(struct Matrix m,int i,int j)
{
    if(i==j)
    return m.A[i-1];
    else
    return 0;
}
void display(struct Matrix m)
{
    int i,j;
    for ( i = 0; i < m.ed; i++)
    {
      for ( j = 0; j < m.ed; j++)
      {
         if (i==j)
         {
            printf("%d ",m.A[i]);
         }
         else 
         printf("0 ");
      }
      printf("\n");
    }
    
}
int main()
{
    struct Matrix m;
    m.ed=4;
    set(&m,1,1,4);
    set(&m,2,2,3);
    set(&m,3,3,2);
    set(&m,4,4,1);
    display(m);
    return 0;
}