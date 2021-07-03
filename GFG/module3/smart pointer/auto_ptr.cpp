/* AUTO POINTER : auto pointer is smart pointer that manages an object obtained via new expression and delete that object when auto_ptr itself is destroyed
An object when described using auto_ptr class it stores a pointer to a single allocated object which ensures that when it goes out of scope, the object it points-to must get automatically destroyed.
*/
#include <bits/stdc++.h>
#include <memory>
using namespace std;
class Auto_pointer
{
	public : 
	void show() {cout<<"Auto_pointer :: show "<<endl;} 
};
int main()
{
	auto_ptr <Auto_pointer> ptr1(new Auto_pointer);
	ptr1->show();
	//return the memory address of ptr1
	cout<<ptr1.get()<<endl;
	// copy constructor called , this makes ptr1 empty
	auto_ptr<Auto_pointer> ptr2(ptr1);
	cout<<ptr1.get()<<endl;
	
	ptr2->show();
	ptr1->show();
}