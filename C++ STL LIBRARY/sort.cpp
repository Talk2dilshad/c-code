/* 

Sorting is one of the most basic functions applied to data.
It means arranging the data in a particular fashion , which can be increasing or decreasing
There is built-in function in c++ stl by the name sort().
This function use intro sort.

The prototype for sort is : 

sort(startaddress, endaddress)

startaddress: the address of the first element of the array
endaddress: the address of the next contiguous location of the last element of the array.

*/
#include <iostream>
#include <algorithm>
using namespace std;
void show(int arr[],int size)
{

	cout<<endl;
	for(int i=0; i< size; i++)
	cout<<arr[i]<< "  ";
	cout<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5,9,8,7,6};
	int size= sizeof(arr)/sizeof(arr[0]);
	show(arr,size);
	sort(arr,arr+size);
	show(arr,size);
	cout<<"binary search using STL Library \n"<<endl;
	if(binary_search(arr,arr+size,2))
	cout<<"Element found ";
	else cout<<"Element not found";
}

