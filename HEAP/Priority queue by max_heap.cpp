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
void insert(int arr[],int size)
{
    int value;
    printf("What Value you wanna Insert sir ?\n");
    scanf("%d",&value);
    size=size+1;
    arr[size]=value;
    while(size > 1 && arr[size/2] < arr[size])
    {
        swap(arr[size/2],arr[size]);
        size=size/2;
    }
}
int extract_maximum(int arr[],int size)
{
    if(size==0)
    return 0;
    int max= arr[1];
    arr[1]=arr[size];
    size=size-1;
    heapSort(arr,size);
    printf("\nextracted element => %d \n",max);
}
void maximum(int arr[])
{
    printf("Maximum => %d",arr[1]); // root => max element in heap tree
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
    int choice;
    do
    {
        printf("\n[1] INSERTION\n[2] DELETION\n[3] Maximum\n[4] Display\n");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:insert(arr,size);
        break;
        case 2:extract_maximum(arr,size);
        break;
        case 3:maximum(arr);
        break;
        case 4: display(arr,size);
        break;
    }
    }
    while(choice<5);

    
    return 0;
}
