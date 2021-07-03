#include <bits/stdc++.h>
using namespace std;

//Shared pointer : More than one pointer access one object at a time
// shared pointer will maintain a reference counter using use_count() method

class square
{
	int side;
	public:
	square(int s)
	{side=s;}
	int area()
	{
		return side*side;
	}
};
int main()
{
	shared_ptr <square> ptr1(new square(5));
	cout<<"ptr1 : "<<ptr1->area()<<endl;

	shared_ptr <square> ptr2;
	ptr2=ptr1;
	cout<<"ptr2 : "<<ptr2->area()<<endl;
}