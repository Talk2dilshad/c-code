/*
How to acess data members and members function ?

The data members and member function of class can be accessed using the dot('.') operator with the object.

ACCESSING DATA MEMBERS
accessing a data member depends solely on the access the control of that data member.
This access control is given by the access modifiers in c++. There are three access modifiers : PUBLIC, PRIVATE AND PROTECTED.

*/
#include <bits/stdc++.h>
using namespace std;

class Geeks
{
	//access specifier
	public :
	// data members
	string myname;

	//member function 
	void printname()
	{
		cout<<"My name is : "<<myname<<endl;
	}
};
int main()
{
	// declare an object of class geeks
	Geeks learner;
	// accessing the data member
	learner.myname="Dilshad";
	//accessing the member function
	learner.printname();
}