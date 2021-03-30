// TIME COMPLEXITY => O(nlog n) . Best case if partioning is in middle. Worst case if partitioning in any ends..

#include <iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low,j=high;

    do
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j) swap(arr[i],arr[j]);
    }while(i<j);
    swap(arr[low],arr[j]);
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
    int arr[]={11,13,7,12,16,9,24,5,10,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size);
    display(arr,size);
    return 0;
}