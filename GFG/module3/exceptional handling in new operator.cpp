#include <iostream>
#include <new>

using namespace std;


int main() {
	
	int *piValue = NULL;
	
	
	piValue = new(nothrow) int[999999999999999]; // We are using nothrow here.
	
	if(piValue == NULL)
	{
		cout<<"Free memory is not available"<<endl;
	}
	else
	{
		cout<<"Free memory available"<<endl;
		delete []piValue;
	}
	

   return 0;
}