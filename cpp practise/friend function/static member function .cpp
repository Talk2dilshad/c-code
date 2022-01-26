#include <iostream>
using namespace std;

/*
static member function
static member function is special function which can only accessed static member,
static member function can access using class or objects.

*/
class alpha
{
	int a;
	public:
	alpha()
	{
		a=5;
	}
	static int data;
	static int getData()
	{
		data++;
		return data;
	}
};
int alpha::data=0;
int main()
{
	alpha a1;
	cout<<"Value using class name "<<alpha::getData()<<endl;
	cout<<"value using object "<<a1.getData()<<endl;
	return 0;
}
