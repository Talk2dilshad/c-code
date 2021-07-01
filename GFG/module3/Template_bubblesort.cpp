#include <iostream>
using namespace std;

template <class T>
void bubblesort(T a[],int size)
{
	bool swapped=false;
	for(int i=0; i< size-1; i++)
	{	swapped=false;
		for(int j=0; j< size-1-i; j++)
		{
			if(a[j]> a[j+1])
			swap(a[j],a[j+1]);
			swapped=true;
		}
		if(!swapped) break;
	}
}

int main()
{
	int a[]={10,50,30,40,20};
	int size=sizeof(a)/sizeof(a[0]);
	// call template function
	bubblesort<int>(a,size);
	cout<<"\n\nSorted Array : ";
	for(int i=0; i<size; i++)
	cout<<a[i]<<" ";
	cout<<endl;
}