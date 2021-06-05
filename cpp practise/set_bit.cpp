//Write an efficient program to count the number of 1s in the binary representation of an integer.
//* Example
// Input : n = 6
// Output : 2
// Binary representation of 6 is 110 and has 2 set bits

// Brian Kernighan's Algorithm:  https://practice.geeksforgeeks.org/tracks/module-2-arrays-and-strings/?batchId=113

#include <bits/stdc++.h>
using namespace std;

//recursive function to count set bits
int countsetBits(int n)
{
	//base case 
	if(n==0) return 0;
	else
	return 1+ countsetBits(n & (n-1));
}
int main()
{
	int n=13;
	
	cout<<countsetBits(n);
	return 0;
}