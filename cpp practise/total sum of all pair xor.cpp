#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100];
	int number_of_digits;
	int result=0;
	cin>>number_of_digits;
	
	for(int i=1; i<=number_of_digits; i++)
	cin>>arr[i];
	for(int i=0; i<31; i++)
	{
		int count_zero=0,count_one=0;
		for(int j=1; j<=number_of_digits; j++)
		{
			if(arr[j] & (1<<i))
			count_one++;
			else count_zero++;
		}
		int pair= count_zero* count_one;
		result += (1<<i)*pair;
	}
	cout<<endl<<result;
}