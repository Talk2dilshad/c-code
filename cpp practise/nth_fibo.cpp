#include<bits/stdc++.h>
using namespace std;

class solution{
	public:
	long long int nth_fibo(long long int n)
	{
double golden_ratio=1.618034;
        int f[6]={0,1,1,2,3,5};
        if(n<6) return f[n];
        
        int t=5;long int fn=5;
        while(t<n)
        {
            fn=round(fn*golden_ratio);t++;
        }
        return fn;
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