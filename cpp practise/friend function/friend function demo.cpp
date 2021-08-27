#include <iostream>
using namespace std;

class alpha
{
	int a1;
	public: 
	alpha(int x=0)
	{
		a1=x;
	}
	friend void fun();
};

class beta
{
	int b1;
	public: 
	beta(int x=0)
	{
		b1=x;
	}
	friend void fun();
};
class comparison
{
	int weight;
	public:
	comparison(int x=0)
	{
		weight=x;
	}
	friend bool operator>(comparison x,comparison y)
	{
		return x.weight>y.weight;
	}
	friend bool operator<(comparison x,comparison y)
	{
		return x.weight<y.weight;
	}
};
void fun()
{
	alpha a(8);
	beta b(12);
	int sum = a.a1+b.b1;
	cout<<"sum ::"<<sum;
}
int main()
{
	fun();

	cout<<"\nComparison \n";
	comparison ricky(290);
	comparison ritesh(30);
	if(ritesh>ricky)
	{
		cout<<"ristesh mota hai";
	}
	else if(ritesh<ricky)
	{
		cout<<"ricky mota hai";
	}
}

