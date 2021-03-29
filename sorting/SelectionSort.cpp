#include <iostream>
using namespace std;
// selection sort is neither adaptive nor stable
void SelectionSort(int arr[],int size)
{
    int j,k;
    for(int i= 0; i<size-1; i++)
    {
        for(j=k=i; j<size; j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
}

int main()
{
    int arr[]={11,13,7,12,16,9,24,5,10,3},size=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,size);
    //display func()
    for (int n : arr)
    {
        cout << n << " ";
    }
}