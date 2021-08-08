/* 
------------------------- Pairs -----------------------------
The pair container is a simple container defined in <utility> header 
consisting of two data elements or objects.
Pair is used to combine together two values (first,second) (of different data type)
Pair can be assigned , copied and compared .
- To access the elements , we use variable name followed by the dot operator followed by keyword first or second.

pair <data_type1, data_type2> Pair_name

We can also initialize a pair. 

Syntax :

pair <data_type1, data_type2> Pair_name (value1, value2) ;

Different ways to initialize pair: 

pair  g1;         //default

pair  g2(1, 'a');  //initialized,  different data type

pair  g3(1, 10);   //initialized,  same data type

pair  g4(g3);    //copy of g3

Note: If not initialized, the first value of the pair gets automatically initialized. 


Member Functions

make_pair() : This template function allows to create a value pair without writing the types explicitly. 
Syntax :
Pair_name = make_pair (value1,value2);

swap : This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type. 
Syntax :

pair1.swap(pair2) ;

*/

#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair <string,int> student ("Dilshad",1);
	cout<< student.first<<" roll no. "<<student.second;

	pair <string,int> reaction;
	reaction = make_pair("estrification",100);

	reaction.swap(student);
	cout<<endl<<student.first<<" roll no. "<<student.second;

}