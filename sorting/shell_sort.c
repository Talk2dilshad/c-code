#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void shellSort(int a[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2; gap>=1; gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=a[i];
            j=i-gap;
            while(j>=0 && a[j]>temp)
            {
                a[j+gap]=a[j];
                j=j-gap;
            }
            a[j+gap]=temp;
        }
    }
}
int main()
{
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
 
 shellSort(A,n);
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0;
}