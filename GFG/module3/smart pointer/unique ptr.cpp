#include <iostream>
#include <memory>
using namespace std;

// Unique pointer
// if object is created and unique ptr p1 is pointing to this one object then only one pointer can point this object one at a time. So we can't share with another pointer, but we can transfer control to pointer p2 if ptr 1 is removed...

class rectangle
{
	int breadth,length;
	public:
	rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	int area()
	{ return length *breadth ; }
};
int main()
{
	unique_ptr <rectangle> p1(new rectangle(10,5));
	cout<<p1->area()<<endl;
	
	unique_ptr <rectangle> p2;
	p2=move(p1);
	cout<<p2->area()<<endl;
	cout<<p1->area()<<endl;// no output as control is transfer to ptr p2..
	
}