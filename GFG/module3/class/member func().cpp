/*
Member functions in class
. INSIDE CLASS FUNCTION
. OUTSIDE CLASS FUNCTION
*/
#include <iostream>
using namespace std;

class member_function
{
	public:
	string name;
	int id;
	// print name is define outside the class
	void print_name();
	// print id is define inside the class
	void print_id()
	{
		id=53;
		cout<<"ID :  "<<id<<endl;
	}
};

void member_function:: print_name()
{
	name="Learning C++";
	cout<<"Name : "<<name<<endl;
}
int main()
{
	member_function learn;
	learn.print_name();
	learn.print_id();
}