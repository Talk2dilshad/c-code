#include  <iostream>
using namespace std;
//  HEAP SorT => RECURSIVE METHOD 

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap


void heapify(int arr[],int n,int i)
{
    int largest=i;     // Initialize largest as root
    int left = 2*i+1; 
    int right= 2*i+2;

    if( left < n  && arr[left] > arr[largest] )
    largest = left;

    else if( right < n && arr[right] > arr[largest])
    largest = right;

    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        //Recursively heapify the affected sub tree 
        heapify(arr,n,largest);
    }
}


//main func() to do heap sort
void heapsort(int arr[], int n)
{
    for(int i= n / 2 - 1;i>=0;i--)
    heapify(arr,n,i);  //  create max heap
    for(int i=n-1; i>0; i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0); //* create max on reduce array
    }
}
//display
void Display(int arr[],int size)
{   
    for(int i=0; i<size; ++i)
    cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int arr[]={4,10,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,size);
    Display(arr,size);
    return 0;
}    