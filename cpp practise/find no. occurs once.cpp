#include <bits/stdc++.h>
using namespace std;

int single_element(int arr[],int size)
{
	// Do xor of all element
	int result= arr[0];
	for(int i=1; i<size;i++)
	result=result^arr[i];

	return result;
}
int main()
{
	int arr[]={2,3,5,4,5,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Element Occuring once is  "<<single_element(arr,size);

	return 0;
}