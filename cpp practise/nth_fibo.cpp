#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
	const long long int mod =1000000007;
	long long int nth_fibo(long long int n)
	{
		// prestoring
		long long int dp[n+5];
		dp[0]=0;
		dp[1]=1;
		for(int i=2; i<=n; i++)
		// same as fibonacci formula f(i) = f(i-1) +f(i-2)
		dp[i]=(dp[i-1]%mod +dp[i-2]%mod)%mod;
		return dp[n];
	}
};

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long int n;
		cin>> n;
		solution ob;
		cout<<ob.nth_fibo(n)<<endl;
	}
	return 0;
}