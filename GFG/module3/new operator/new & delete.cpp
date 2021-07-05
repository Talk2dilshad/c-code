#include <iostream>
using namespace std;

int main()
{
	// pointer initialization to null
	int *ptr=NULL;
	ptr = new(nothrow) int;
	if(!ptr)
	cout<<"Memory Allocation failed\n";
	else
	{
		*ptr=69;
		cout<<"value of pointer ptr :  "<<*ptr<<endl;
	}
	// request block of memory  
	int *arr = new(nothrow) int[5];
	if(!arr)
	cout<<"Memory insufficient\n";
	else
	{
		// input
		for(int i=0; i<5; i++)
		arr[i] = i+i;
		cout<<"value in allocated memory : ";
		for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	}
	// memory is allocated but deallocation is needed to be done by programmer
	delete[] arr;
	delete ptr;
	return 0;
}