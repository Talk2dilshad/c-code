#include <bits/stdc++.h>
using namespace std;

// Objective : Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object

class Super_A
{
	public : int x;
	private : int y;
	protected : int z;
};

class b : public Super_A
{
	// x is public  
	// y is not accessible from derived class b as y is private member
	// z is protected
};
class c : protected Super_A
{
	// x is protected
	// y is not accessible from c
	// z is protected 
};
class d : private Super_A
{
	// x is private 
	// y is not accessible from d
	// z is private
};
int main()
{
	// no execution
	return 0;
}