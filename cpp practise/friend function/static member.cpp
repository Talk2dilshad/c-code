#include <iostream>
using namespace std;

/*
what is static member ?
STATIC MEMBER WOULD BE ALLOCATED MEMORY ONLY ONCE
AND THE MEMORY IS SHARED BY BOTH THE OBJECT
STATIC DATA MEMBERS BELONG A CLASS AND COMMON TO ALL OBJECTS.
*/
class alpha
{
	int a;
	public :
	alpha()
	{
		int a=5;
		member_value++;
	}
	static int member_value;
};
int alpha::member_value=0;
int main()
{
	alpha mine;
	cout<<mine.member_value;
}