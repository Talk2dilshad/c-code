#include <iostream>
using namespace std;

int main()
{
	cout<<"Frank Carpet Cleaning Service\n\n";
	int small_room_serviceCharge;
	int large_room_serviceCharge;

	cout<<"Enter No. of small & large room :  ";
	cin>>small_room_serviceCharge>>large_room_serviceCharge;
	cout<<"\nEstimate for carpet cleaning service"<<endl;
	cout<<"\nprice per small rooms : "<<small_room_serviceCharge;
	cout<<"\nprice per large rooms : "<<large_room_serviceCharge;
	int cost; double tax;
	cost=small_room_serviceCharge*25+large_room_serviceCharge*35;
	tax=(small_room_serviceCharge*25+large_room_serviceCharge*35)*0.06;
	cout<<"\nCost : $"<<cost;
	cout<<"\nTax : $"<<tax;
	cout<<"\nTotal estimate : $"<<cost+tax;

}