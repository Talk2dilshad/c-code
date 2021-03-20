#include <stdio.h>
#include <stdlib.h>

void insert(int A[],int n)
{
    int temp,i=n;
    temp=A[i];
    while(i >1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

void display(int a[],int size)
{
    for(int i=1;i< size;i++)
    {
        printf("%d  ",a[i]);
    }
}

int delete(int A[],int n)
{
    int i,j,x,val,temp;

    val=A[1]; //store value of first element for sorting

    A[1]=A[n]; //delete a[1] and change it with last index value 
    A[n]=val;  //deleted element should be in heap that will help to form heap sort 
    i=1; j=i*2;
    while( j< n-1)
    {
        if(A[j+1] > A[j])
            j=j+1;
        if(A[i] < A[j])
        {//swapping element..
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j; j*=2;
        }
        else
        break;
    }
    return val;
}

int main()
{
    int heap[]={0,10,20,30,25,5,40,35};
    int size= sizeof(heap)/sizeof(heap[0]);
    for(int i=2;i <= size ; i++)
    insert(heap,i);
   
    display(heap,size);

    for(int i=size-1; i>1 ; i--)
    {
    printf("\nDeleted value => %d \n",delete(heap,i));
    }
    display(heap,size);

    printf("\n\n\nThank You");
    return 0;
}