#include <stdio.h>
#include <stdlib.h>

int find_max(int A[],int n)
{
    int max=-256;
    int i;
    for(i=0;i<n;i++)
    {
    if(A[i]>max)
    max=A[i];
    }
    return max;
}


void countSort(int a[],int n)// a=> array,n=>size
{
    int max,j,i,*c;
    max=find_max(a,n);
    // c => count array
    c=(int *)malloc(sizeof(int )*(max+1));
    
    for(i=0; i<max+1; i++)
    c[i]=0;// initialize count array=> 0

    for(i=0; i<n; i++)
    c[a[i]]++;// count++ 

    //copy back data into original array
    i=0; j=0;
    while(i<max+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;// copy and move pointer forward and j is pointing on original array
            c[i]--; // decrease the value of count array
        }
        else
        i++;// move count pointer
    }
}
void display(int a[],int n)
{
    printf("[");
    for(int i=0;i < n; i++)
    printf(" %d ",a[i]);
    printf("]\n");
}
int main()
{
    int size; 
    printf("Enter the number of elements want to be sorted: ");
    scanf("%d",&size);
    int arr[size];
    for(int i= 0; i< size; i++)
    scanf("%d",&arr[i]);


    countSort(arr,size);
    
    display(arr,size);
    return 0;
}