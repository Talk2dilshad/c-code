#include <stdio.h>
#include <stdlib.h>


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
void MergeSort(int arr[],int n)
{// n => size of array
    int i,low,mid,high,p;// p=> passes  // i => merge two list and calculate high mid low
    for(p=2;p<=n;p=p*2)
    {
        for( i= 0; i+p-1<=n; i=i+p)
        {
            low=i;
            high=i+p-1;
            mid=(low+high)/2;
            merge(arr,low,mid,high);
        }
    }
    if(p/2<n) merge(arr,0,p/2-1,n);
}
void display(int a[],int n)
{
    printf("[");
    for(int i=0;i <= n; i++)
    printf(" %d ",a[i]);
    printf("]\n");
}
int main()
{
    int arr[]={11,13,7,12,16,9,24,5,10,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    MergeSort(arr,size);
    display(arr,10);
}