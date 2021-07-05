#include <iostream>
using namespace std;
//In C++, a structure is the same as a class except for a few differences. The most important of them is security. A Structure is not secure and cannot hide its implementation details from the end-user while a class is secure and can hide its programming and designing details. Following are the points that expound on this difference: 
//	 Members of a class are private by default and members of a structure are public by default. 

class test 
{
	int result;
};

struct test
{
	int result;
};
// when deriving a struct from a class , the default access specifier for a base is public. When deriving a class , the default access specifier is private.
class base// program 3
{
	public :
	int x;
};
class Derived : base {};//  base is private
struct derived : base {};// base is public 

int main()
{
	test chemistry;
	chemistry.result=20;
	getchar();
	// structure 
	test math;
	math.result=95;// member are public 
	getchar();

	//program 3
	Derived d ;
	d.x=20; // compiler error because inheritance is private
	getchar();

	// program 4
	derived s;
	s.x=50; // works fine because inheritance is public
	getchar();
}