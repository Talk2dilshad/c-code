#include <bits/stdc++.h>
using namespace std;
//What is a copy constructor? 
//A copy constructor is a member function that initializes an object using another object of the same class. A copy constructor has the following general function prototype: 

//ClassName (const ClassName &old_obj);
class point
{
	//private data member
	int x,y;
	public :
	point(int x1,int y1)//public member function can access private data member radius
	{
		x=x1;
		y=y1;
	}
	// copy constructor
	point(const point&p1)
	{
		x=p1.x+5;
		y=p1.y+10;
	}
	// func() to fetch data
	int get_X(){return x;}
	int get_Y(){return y;}
	
};
int main()
{
	point p1(100,200);// Normal constructor called
	point p2 =p1; // copy constructor called
	// values assigned by constructor
	cout<<"p1.x = "<<p1.get_X()<<" , p1.y = "<<p1.get_Y()<<endl;
	cout<<"p2.x = "<<p2.get_X()<<" , p2.y = "<<p2.get_Y()<<endl;
}
