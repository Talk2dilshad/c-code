#include <bits/stdc++.h>
using namespace std;
/* single inheritance : In single inheritance , a derived class is allowed to inherit from one base class only.
Syntax : class subclass_name : access_mode base_class
{
  //body of subclass
};


Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. i.e one sub class is inherited from more than one base classes.

Syntax: 

class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  //body of subclass
};

Hierarchical Inheritance: In this type of inheritance, more than one sub class is inherited from a single base class. i.e. more than one derived class is created from a single base class.
*/

//Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.
// C++ program to implement inheritance
class vehicle // base class
{
  public :
  vehicle()
  {
    cout<<"This is a vehicle"<<endl;
  }
};
//first class derived from base class
class four_wheeler: public vehicle
{
  public :
  four_wheeler()
  {
    cout<<"Four wheeler objected created"<<endl;
  }
};
class car: public four_wheeler
{
  public:
  car()
  {
  cout<<"Object car is created from four_wheeler"<<endl;
  }
};
int main()
{
  car object;
  return 0;
}