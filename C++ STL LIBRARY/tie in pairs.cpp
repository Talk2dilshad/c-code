/* 
Tie () :  It creates a pair of lvalue references to its arguments i.e., to unpack the pair values into separate variables. Just like in tuple's, here are also two variants of tie, with and without “ignore”. “ignore” keyword ignores a particular pair element from getting unpacked. 

Syntax : tie(int &, int &) = pair1; 

// CPP code to illustrate tie() in pairs

*/

#include <iostream>
#include <utility>// pair 
#include <tuple>// tie member function is included in tuple header file
using namespace std;

int main()
{
	pair <int,int> pair1(1,2);
	int a , b; 
	tie(a,b) =pair1;
	cout << a << " " << b << "\n";

	pair<int , int > pair2 (3,4);
	tie(a,ignore) = pair2;
	cout << a << " " << b << "\n";

	// Illustrating pair of pairs
	pair <int , pair<int,char>> pair_of_pairs = {7,{10,'c'}};
	// tie(x,y,z) = pair3; Gives compilation error
    // tie(x, tie(y,z)) = pair3; Gives compilation error
    // Each pair needs to be explicitly handled
	int x,y; char z;
	x= pair_of_pairs.first;
	tie(y,z)= pair_of_pairs.second;
	cout<<x<<" "<<y<<" "<<z<<endl;

}