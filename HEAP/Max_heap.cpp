// Max_Heap

#include <iostream>
using namespace std;

void max_heapify(int arr[],int size,int i)
{
    int root=i;
    int left_child=2*i;
    int right_child=2*i+1;

    if(left_child < size && arr[left_child] > arr[root])
        root=left_child;
    else if(right_child < size && arr[right_child] > arr[root])
        root=right_child;
    if(root != i)
    {
        swap(arr[i],arr[root]);
        max_heapify(arr,size,root);
    }
}//complexity O(logn)

void build_Max_heap(int arr[],int size)
{
    for(int k=size/2; k>=1; k--)
    max_heapify(arr,size,k);
}
void heapSort(int arr[],int size)
{
    int heap_size=size;
    build_Max_heap(arr,heap_size);
    for(int i=size; i>=2; i--)
    {
        swap(arr[1],arr[i]);
        heap_size=heap_size-1;
        max_heapify(arr,heap_size,1);// 1=> means passing root to heapify
    }
}
void display(int a[],int size)
{
    for(int i=1;i<= size;i++)
    {
        printf("%d  ",a[i]);
    }
}

int main()
{
    int size;
    cout<<"Enter the no. of elements :  ";
    cin>>size;
    int arr[size];
    cout<<endl;
    for(int i=1; i<= size; i++)
    {
        cout<<"enter elements"<<"  "<<(i)<<endl;
        cin>>arr[i];
    }
    heapSort(arr,size);
    display(arr,size);
}
