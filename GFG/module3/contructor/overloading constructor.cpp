#include <iostream>
using namespace std;

// write program take phone details as input and store them in object & use constructor
// phone detail - NAME RAM PROCESSOR BATTERY

class phone
{
	string name;
	int ram;
	string processor;
	int battery;

	public : 
	phone(string name_a="NULL",int ram_a=0,string processor_a="NULL",int battery_a= 0)// overloading constructor
	{	
		name = name_a;
		processor=processor_a;
		ram=ram_a;
		battery=battery_a;
	}
	phone(phone &mob)
	{
		name=mob.name;
		processor=mob.processor;
		ram=mob.ram;
		battery=mob.battery;
	}
	void getPhone_data();
};
void phone::getPhone_data()
{
	cout<<"\nName "<<name;
	cout<<"\nprocessor "<<processor;
	cout<<"\nram "<<ram<<"gb";
	cout<<"\nbattery "<<battery<<"mah\n";
}
int main()
{
	phone Asus;
	Asus.getPhone_data();
	phone Asus_M2pro("rx190",3,"snapdragon 660",5000);
	Asus_M2pro.getPhone_data();
	phone redmi(Asus_M2pro);
	redmi.getPhone_data();
}