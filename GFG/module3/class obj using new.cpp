//Why used new operator in c++
// when we create an object using the automatic storage class than it destroy automatically when it go out of scope in which it declares.

#include <iostream>
using namespace std;

class trip
{
	public :
	unsigned distance;
	trip();
	~trip();
};
trip::trip() // contructor
{
	cout<<"\nObject Created"<<endl;
	cout<<"petrol price is too high\nstay safe at home\n";
}
trip::~trip()// destructor
{
	cout<<endl<<"Object destroyed"<<endl;
}
int main()
{
	trip *goa= new trip();// object created using new operator
	delete goa;
}