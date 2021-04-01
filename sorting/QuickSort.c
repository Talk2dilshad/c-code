// TIME COMPLEXITY => O(nlog n) . Best case if partioning is in middle. Worst case if partitioning in any ends..

#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low,j=high;

    do
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j) swap(&arr[i],&arr[j]);
    }while(i<j);
    swap(&arr[low],&arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high)
{
    int j;//local variable
    if(low<high)
    {
        j=partition(arr,low,high);
        quicksort(arr,low,j);
        quicksort(arr,j+1,high);
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


    
    quicksort(arr,0,size);
    display(arr,size);
    return 0;
}