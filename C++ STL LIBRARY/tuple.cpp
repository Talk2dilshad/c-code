/* 
What is a tuple?
A tuple is an object that can hold a number of elements. The elements can be of different data types. The elements of tuples are initialized as arguments in order in which they will be accessed.

Operations on tuple :-

1. get() :- get() is used to access the tuple values and modify them, it accepts the index and tuple name as arguments to access a particular tuple element.

2. make_tuple() :- make_tuple() is used to assign tuple with values. The values passed should be in order with the values declared in tuple.

3. tuple_size :- It returns the number of elements present in the tuple

4. swap() :- The swap(), swaps the elements of the two different tuples.

5. tie() :- The work of tie() is to unpack the tuple values into separate variables

6. tuple_cat() :- This function concatenates two tuples and returns a new tuple.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	tuple <int,float,string> admission ;
	admission = make_tuple(2,1800.75,"Asif");
	// display tuple
	// cout<<"The initial values of tuple are : ";
	// cout<<get<0>(admission)<<endl << get<1>(admission)<< endl<<get<2>(admission)<<endl;

	// use of get() to change value of tuple
	get<0> (admission) = 1;
	get<2> (admission) = "Yoyo";
	// display tuple
	// cout<<"The initial values of tuple are : ";
	// cout<<get<0>(admission)<<endl << get<1>(admission)<< endl<<get<2>(admission)<<endl;


	//3. Use of size to find tuple_size of tuple
    cout << "The size of tuple is : ";
	cout<<tuple_size<decltype(admission)>::value<<endl;	

	tuple <int , float , string > tup2;
	tup2 = make_tuple(20,5.645,"It's swap babe");

	// swap 
	admission.swap(tup2);
	// display tuple
	cout<<"The swap values of tuple are : ";
	cout<<get<0>(admission)<<" "<< get<1>(admission)<<" "<<get<2>(admission)<<endl;

	auto tup3= tuple_cat(admission,tup2);
	// Displaying new tuple elements
    cout << "The new tuple elements in order are : ";
    cout << get<0>(tup3) << " " << get<1>(tup3) << " ";
    cout << get<2>(tup3) << " " << get<3>(tup3) << " ";
    cout << get<4>(tup3) << " " << get<5>(tup3) << endl;

}