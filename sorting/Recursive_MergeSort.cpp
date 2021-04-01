#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    int b[high];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])  
        b[k++]=arr[i++];
        
        else
        b[k++]=arr[j++];
    }
    for(;i<=mid;i++) b[k++]=arr[i];
    for(;j<=high;j++) b[k++]=arr[j];
    for(i=low;i<=high;i++)arr[i]=b[i]; 
}

void MergeSort(int a[],int low,int high)
{int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        merge(a,low,mid,high);
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

    MergeSort(arr,0,size);
    display(arr,size);
    return 0;

    
}