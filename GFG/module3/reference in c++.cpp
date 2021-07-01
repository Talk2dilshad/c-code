#include  <bits/stdc++.h>
using namespace std;

int main()
{
	int x=10;
	int& ref = x;// ref is a reference to x
	ref=20; // value of x changed to 20
	cout<<"\nThe value of x :  "<<x<<endl;
	x=30;// the value of ref change due change in x
	cout<<"\nThe value of ref after change in x : "<<ref<<endl;
}