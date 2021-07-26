#include <iostream>
using namespace std;

class person
{
	int weight;
	public :
	person(int x=0)// parametrized and overloading constructor
	{
		weight=x;
	}
	
	//display weight
	void print_value()
	{
		cout<<"\nWeight :  "<<weight<<endl;
	}
	// overloading operator
	person operator+ (person person_2)
	{
		person temp;
		temp.weight= weight + person_2.weight;
		return temp;
	};
	// overloading pre & post increment
	void operator++ ()
	{
		++weight;// preincrement
	}
};
int main()
{
	person mota_bhy(90),chota_bhy(50);

	person total_weight;

	total_weight = mota_bhy + chota_bhy;// operator overloading ...

	total_weight.print_value();
	// overloading pre & post increment
	++mota_bhy;
	cout<<"Mota bhy ";
	mota_bhy.print_value();

}