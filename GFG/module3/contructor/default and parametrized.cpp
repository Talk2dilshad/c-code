#include <bits/stdc++.h>
using namespace std;

class geeks
{
	public :
	int id=5;

	//default constructor
	geeks()
	{
		cout<<"default constructor called"<<endl;
	}

	// parameterized constructor
	geeks(int x)
	{
		cout<<"Parameterized constructor called "<<endl;
		id=x;
	}

};

int main()
{
	geeks Default;
	cout<<"Default id value "<<Default.id<<endl;
	geeks parameterized(6);
	cout<<"Parameterized id value "<<parameterized.id<<endl;
}