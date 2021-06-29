#include <bits/stdc++.h>
using namespace std;
class Solution
{
	public:
    vector<int> getXor(vector<int> A, int N)
    {
        // calculate xor of vector
        int XOR=0;
        for(auto i= 0; i<N; i++)
        XOR^=A[i];
        vector <int> result;
		for(auto x : A)
		{
			result.push_back(XOR^x);
		}
		return result;
    }
};
int main()
{
	int N; cin>>N;
	vector <int > A(N);
	for(int i =0 ; i< N; i++)
	cin>>A[i];
	Solution ob;
	vector <int> B= ob.getXor(A,N);
	for(int i=0; i<N; i++)
	cout<<B[i]<<" ";

	cout<<endl;
}