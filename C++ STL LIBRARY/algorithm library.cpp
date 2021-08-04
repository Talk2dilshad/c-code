/* 
Non-Manipulating Algorithms

sort(first_iterator, last_iterator) – To sort the given vector.
reverse(first_iterator, last_iterator) – To reverse a vector.
*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements

*/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
void show_vector(vector<int> myvector,int size)
{
	cout<<"Vector elements :  ";
	for(int i=0; i<size; i++)
	cout<<myvector[i]<<" ";
	cout<<endl;
}
int main()
{
	int arr[]={1,9,2,8,1,1,1,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	vector <int> myvector(arr,arr+size);
	show_vector(myvector,size);
	sort(myvector.begin(),myvector.end());
	show_vector(myvector,size);
	// reverse vector
	reverse(myvector.begin(),myvector.end());
	show_vector(myvector,size);
	//starting summation from "0"
	cout<<accumulate(myvector.begin(),myvector.end(),10);

	//count 'x' using stl library
	cout<<endl<<count(myvector.begin(),myvector.end(),1)<<endl;
	
	// find() returns iterator to last address if
    // element not present
	find(myvector.begin(),myvector.end(),1) != myvector.end() ? 
	cout<<"element found\n" : cout<<"Element not found\n";

	/* ------------------------ MANIPULATING ALGORITHMS---------------------------
	arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
	
	arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.

	*/
	myvector.erase(myvector.begin());
	show_vector(myvector,myvector.size());

	myvector.erase(unique(myvector.begin(),myvector.end()),myvector.end());
	show_vector(myvector,myvector.size());
    
	/*
	next_permutation(first_iterator,last_iterator) : This modifies to its next permutation
	prev_permutation(first_iterator,last_iterator) : this modifies to its previous permutation

	*/
	int arr_per[]={1,2,3};
	cout<<"\nThe 3! possible permutation with 3 elements \n";
	do
	{
		cout<<arr_per[0]<<" "<<arr_per[1]<<" "<<arr_per[2]<<endl;
	}
	while(next_permutation(arr_per,arr_per+3));
	cout<<"\nAfter Loop "<<arr_per[0]<<" "<<arr_per[1]<<" "<<arr_per[2]<<endl;

	// distance(first_iterator , desired_position) :  It return the desired position from the first iterator. This function is very useful while finding the index 
	cout<<"Distance between first element and max element is ";
	cout<<distance(myvector.begin(),max_element(myvector.begin(),myvector.end()));

	// upper and lower bond 
	vector <int> myvector1(arr,arr+size);
	//sort the vector to make sure that lower and upper bound work 
	sort(myvector1.begin(),myvector1.end());
	cout<<"Vector 1 ";
	show_vector(myvector1,myvector1.size());
	auto q = lower_bound(myvector1.begin(),myvector1.end(),7);
	cout <<"\nThe lower bound is at position ";
	cout<<q-myvector1.begin();
}  