#include <bits/stdc++.h>
using namespace std;

int main()
{
	// step 1 do & operation 
	// step 2 do right shift operation
	int num;
	cin>>num;
	int count =0;
	while(num>0)
	{
		if((num & 1)>0)
		count++;
		num=num>>1;
	}
	cout<<count;
}