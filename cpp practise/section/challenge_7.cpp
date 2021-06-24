#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	vector2.push_back(100);
	vector2.push_back(200);

	cout<<"\nVector 1 :  "<<vector1.at(0)<<"  "<<vector1.at(1)<<endl;
	cout<<"Vector 1 contain : "<<vector1.size()<<" elements"<<endl;

	cout<<"\nVector 2 :  "<<vector2.at(0)<<"  "<<vector2.at(1)<<endl;
	cout<<"Vector 2 contain : "<<vector2.size()<<" elements"<<endl;

	vector<vector <int>> vector_2d;
	//1. vect_2d is a 2D vector consiting multiple elements of type vector<int>.
    //2. vector<int> is a 1D vector consiting of multiple int data.
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);


	cout<<"Vector 2D : \n";
	for( vector <int > vector_1d : vector_2d)
    {
		for(int x : vector_1d)
			cout<<x<<" ";
		cout<<endl;
	} 
	//display 2d vector using at() method
	cout<<endl<<"vector 2d display using at() method "<<endl;
	cout<<vector_2d.at(0).at(0)<<"  "<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(0)<<"  "<<vector_2d.at(1).at(1)<<endl;
	
	//change vector1 value to 1000 of 0 index
	vector1.at(0)=1000;
	
	// value of 2d vector doesn't change even after change in vector 1
	cout<<"\n2D Vector after change in vector1 "<<endl;
	for(vector <int> vector_1d : vector_2d)
	{
		for(int x : vector_1d)
		cout<<x<<" ";
		cout<<endl;
	}



}