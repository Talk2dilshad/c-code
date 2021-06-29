#include <bits/stdc++.h>
using namespace std;
int countsetBits(int n)
{
	//base case 
	if(n==0) return 0;
	else
	return 1+ countsetBits(n & (n-1));
}
int checkbits(int n)
{
	int power;
	power=countsetBits(n);
	if(((1<<power) -1)== n)
	return 1;
	else return 0;
}
int main()
{
	int n;
	cin>>n;
	cout<<checkbits(n);
}