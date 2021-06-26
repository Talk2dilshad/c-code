// what is vector?
// vector are known as dynamic array with the ability to resize itself automatically when an element is inserted or deleted , with their storage being handled automatically by the container.

#include <iostream>
#include <vector>
using namespace std;
// defining the rows and column of vector of vectors
#define row 4
#define column 5
int main()
{

/*
INSERTION IN VECTOR OF VECTORS
Syntax:
vector_name.push_back(value)
where value refers to the element
to be added in the back of the vector
*/

vector <vector <int> > vector2d;
int num = 10;// elements to insert in column
for(int i = 0; i<row; i++)
{
	vector <int > v1;// vector to store column elements
	for(int j=0; j<column; j++)
	{
		v1.push_back(num);
		num +=5;
	}
	vector2d.push_back(v1);
}
// displaying the 2d vector
	for(int i=0; i<vector2d.size(); i++)
	{
		for(int j=0; j<vector2d[i].size();j++)
		cout<<vector2d[i][j]<<"  ";
		cout<< endl;
	}
	//removal or deletion in a 2d vector
	vector2d[1].pop_back();
	// displaying the 2d vector
	cout<<"\ndisplaying using iterator the 2d vector after deletion\n";
	for(int i=0; i<vector2d.size(); i++)
	{
		for(auto it= vector2d[i].begin(); it != vector2d[i].end(); it++)
		cout<<*it<<"  ";
		cout<<endl;
	}
	
}