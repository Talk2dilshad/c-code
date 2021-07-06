#include <bits/stdc++.h>
using namespace std;

class point
{
	int x,y;
	public :
	point(int x1,int y1)
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
