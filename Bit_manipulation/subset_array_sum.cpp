// Example
// Input: array = -1, 2, 4, 121, N = 5

// Output: YES

// The array elements 2, 4, -1 can be added to sum to N

#include <bits/stdc++.h>
using namespace std;

// find the way to sum to N using array elements atmost once
void find(int arr[],int length,int s)
{
	// loop for all combination i.e., 2^length
	for(int i=1; i< (pow(2,length)); i++)
	{
		// sum of combination
		int sum=0;
		for(int j=0; j< length; j++)
		//if the bits are 1 then add the elements
		if (((i >> j) & 1))
		sum += arr[j];

		//if sum is equal to s(user input) then print yes
		if(sum==s)
		{
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
}
int main()
{
	int sum=5;
	int array[]= {1,2,4,11};
	int length= sizeof(array) /sizeof(int);

	find(array, length, sum);

	return 0;
}