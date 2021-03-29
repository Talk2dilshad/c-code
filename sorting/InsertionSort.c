#include <stdio.h>
#include <stdlib.h>

void Insertion(int A[],int n)
{

    for(int f=1;f<n;f++)// "f" / "b"=> pointing on array index in forward /backward direction 
    {
        int b=f-1;
        int x=A[f];
        while(b>-1 && A[b]>x)
        {
            A[b+1]=A[b];
            b--;
        }
        A[b+1]=x;
    }
}//complexity O(n²)
void display(int a[],int n)
{
    printf("[");
    for(int i=0;i < n; i++)
    printf(" %d ",a[i]);
    printf("]\n");
}
int main()
{
 int A[]={3,7,8,10,2,5},n=sizeof(A)/sizeof(A[0]),i;
 
 Insertion(A,n);
 
 display(A,n);

 return 0;
}
