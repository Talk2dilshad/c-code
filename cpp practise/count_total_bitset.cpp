#include <bits/stdc++.h>
using namespace std;

class solution
{
	public:
	// n: input to count the number of set bits
	// function to return sum of count of set bits in the integers from 1 to n

	int countSetBits(int n)
	{
		if(n==0) return 0;
		
		int x=largest_powerof2inrange(n);
		// counting all set bit upto 2^x
		int bitsupto2powerx= (1<<x-1)*x;

		// taking msb on accounts
		int msb2rxto_n = n-(1<<x)+1;

		//rest
		int remaining = n-(1<<x);

		int result= bitsupto2powerx + msb2rxto_n + countSetBits(remaining);
		return result;

	}
	int largest_powerof2inrange(int n)
	{
		int x=0;
		while((1<<x) <= n)
		x++;
		return x-1;
	}

};
int main()
{
	int n;
	cin>>n;
	solution ob;
	cout<< ob.countSetBits(n)<<endl;
}