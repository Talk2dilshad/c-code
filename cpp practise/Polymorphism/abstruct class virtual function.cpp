#include <iostream>
using namespace std;

/*

In C++ polymorphism is mainly divided into two types:

Compile time Polymorphism : This type of polymorphism is achieved by function overloading or operator overloading.

Runtime Polymorphism : This type of polymorphism is achieved by Function Overriding.


*/

class parent
{
	public : virtual void show()=0;
};
class boy : public parent
{
	public: 
	void show()
	{
		cout<<"You are boy"<<endl;
	}
};
class  girl : public parent
{
	public: 
	void show()
	{
		cout<<"You are girl"<<endl;
	}
};
int main()
{
	parent *ptr;
	ptr = new boy;
	ptr->show();
	ptr = new girl;
	ptr->show();
}