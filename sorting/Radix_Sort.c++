#include <iostream>
using namespace std;

int find_max(int a[],int n)
{
    int max=a[0];
    for(int i=1; i< n;i++)
    if(a[i]>max)
    max=a[i];
    return max;
}

void counting_sort(int a[],int size,int div)
{
    int output[size];
    int count[10]={0};//initialize count array 

    //move forward from lsb to msb
    for(int i=0; i<size ; i++)
    count[(a[i]/div)%10]++;
    
    for(int i=1; i<10 ; i++)
    count[i]=count[i]+count[i-1];
    
    for(int i=size-1;i>=0; i--)
    {
        output[count[(a[i]/div)%10]-1]=a[i];
        count[(a[i]/div)%10]--;
    }
    for(int i=0; i<size; i++)
    a[i]=output[i];
}

int Radix_Sort(int a[],int size)
{
    int max=find_max(a,size);
    //do counting sort for every digit
    for(int div=1;max/div>0;div*=10)
    counting_sort(a,size,div);
}

int main()
{
    int size;
    cout<<"Enter the size :  ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element to be sorted :  ";
    for(int i=0; i<size; i++)
    cin>>arr[i];

    Radix_Sort(arr,size);
    
    //display
    for(int n : arr)
    cout<<n<<" ";

}