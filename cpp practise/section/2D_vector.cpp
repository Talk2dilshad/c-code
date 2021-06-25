/*
PROBLEM STATEMENT
Input : 
Number of rows : 5 
Number of columns in rows :  2 3 4 5 1
Output : 1 2
         	1 2 3
         	1 2 3 4
         	1 2 3 4 5 
         	1

Input : Number of rows : 3
        Number of columns in rows : 3 2 1

Output : 1 2 3
         	1 2
     	    1

*/
#include <bits\stdc++.h>
using namespace std;

int main()
{
	int row=5;
	int colomn[]={5,4,3,2,1};
	// create vector with size (row)
	vector<vector <int> > vec(row);
	for(int i=0; i<row ; i++)
	{
		//declaring colomn size
		int col = colomn[i];
		vec[i]=vector <int> (col); // ith row of vector have (col) column
		for(int j=0; j <= col; j++)
		{
			vec[i][j]=j+1;
		}
	} 
	// display function
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<vec[i].size(); j++)
		cout<<vec[i][j]<<"  ";
		cout<<endl;
	}
}