/*
What is protected access modifier ?

Protected access modifier is very similar to private access modifier but it provide additional benefits that they can be accessed in child classes which are called derived classes.





*/

#include <bits/stdc++.h>
using namespace std;

// base class 
class parent 
{
	// protected data members
	protected :
	int id_protected;
};
// sub class or derived class 
class child : public parent
{
	public :
	void set_id(int new_id)
	{
		id_protected=new_id;//child class access the inherited protected data members of base class
	}
	// display
	void display()
	{
		cout<<"\nProtected id is Inherited\nThe value store : "<<id_protected<<endl;
	}	
};
int main()
{
	child learning;
	learning.set_id(5);
	learning.display();
}