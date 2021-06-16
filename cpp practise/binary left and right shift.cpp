#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int number,i;
	// cin>>number>>i;
	// cout<<"Right shift : "<<number<<">>"<<i<<"  "<<(number>>i)<<endl;
	// cout<<"Left shift : "<<number<<"<<"<<i<<"  "<<(number<<i)<<endl;


	// Checking for ith set bit

	// PROBLEM STATEMENT
	// given a number and index i , find whether ith bit in binary representation of n is set or not

	unsigned int n,i;
	cin>>n>>i; 
	unsigned int f=1;
	f=f<<i;
	unsigned result= n&f;
	if(result != 0) cout<<"true";
	else cout<<"false";

}