#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/* Mini Project -ATM
-> check balance
-> cash withdraw
-> user details
-> update Phone Number
*/

class ATM
{
	long int acc_no;
	string name;
	int pin;
	double balance;
	string mobile_no;
	
	public :
	void setData(long int acc_n,string nam,int pinn,double bal , string mobile_num)
	{
		acc_no=acc_n;
		name=nam;
		pin=pinn;
		balance=bal;
		mobile_no=mobile_num;
	}
	//get acc info
	long int getAccountinfo()
	{
		return acc_no;
	}
	string getName()
	{
		return name;
	}
	int getPin()
	{
		return pin;
	}
	double getBalance()
	{
		return balance;
	}
	string getMobile_no()
	{
		return mobile_no;
	}
	void change_no(string old_no,string new_no)
	{
		if(old_no==mobile_no)
		{
			mobile_no=new_no;
			cout<<endl<<"Sucessfully updated Phone Number";
			_getch();// getch is to hold the screen until user press any key
		}
		else
		{
			cout<<endl<<"Incorrect Phone number";
			_getch();
		}
	}
	//cashwithdraw function is used to withdraw money from ATM
	void cash_withdraw(int amnt)
	{
		if(amnt > 0 && amnt < balance)
		{
			balance -= amnt;
			cout<<endl<<"Collect Your Cash ";
			cout<<endl<<"Available Balance : "<<balance;
			getch();
		}
		else
		cout<<endl<<"Insufficient Balance";
		getch();
	}
};


int main()
{
	int choice =0, enter_pin;
	long int enter_acc_no;
	system("cls");
	// user (object)
	ATM user;
	user.setData(9211420,"fakir Oo k fakir",1234,2000,"123456789");
	do
	{
		system("cls");
		cout<<endl<<"*********** Welcome to ATM ***********\n";
		cout<<"\nEnter the Account Number :  ";
		cin>>enter_acc_no;
		cout<<"\nenter pin ";
		cin>>enter_pin;
	
		if((enter_acc_no == user.getAccountinfo() && (enter_pin == user.getPin())))
		{
			do
			{
				int amount=0;
				string old_no,new_no;
				system("cls");
					// user Interface
					cout << endl << "**** Welcome to ATM *****" << endl;
					cout << endl << "Select Options ";
					cout << endl << "1. Check Balance";
					cout << endl << "2. Cash withdraw";
					cout << endl << "3. Show User Details";
					cout << endl << "4. Update Mobile no.";
					cout << endl << "5. Exit\n\n" << endl;
					cout<<endl<<"Enter the choice :  ";
					cin >> choice;					// taking user choice
				switch(choice)
				{
					case 1 :
					cout<<endl<<"Your Bank balance : "<<user.getBalance();getch();break;
					case 2 :
					// if user presses 2
					cout << endl << "Enter the amount :";		
					cin >> amount;
					user.cash_withdraw(amount);	 
					break;
					case 3: 
					cout<<endl<<"**** User Details ****";
					cout<<endl<<"Account Number "<<user.getAccountinfo();
					cout<<endl<<"Name "<<user.getName();
					cout<<"\nBalance "<<user.getBalance();
					cout<<"\nPhone Number "<<user.getMobile_no();
					getch();break;
					case 4: 
					//  if user presses 4
					cout << endl << "Enter Old Mobile No. ";
					cin >> old_no;							// take old mobile no

						cout << endl << "Enter New Mobile No. ";
						cin >> new_no;
						user.change_no(old_no,new_no);	// now set new mobile no
						break;
						case 5: exit(0);
						default: cout<<endl<<"Enter valid input";
				}
			}
			while(1);
		}
	}while(1);
}