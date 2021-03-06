//learn modifiers in vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	// assign vector 
	vector<int> vec;
	// fill the array 8 , 12 times
	vec.assign(8,12);

	// size 
	int size= vec.size();

	// display array 
	for(int i=0 ; i< size ; i++)
	cout<<vec[i]<<" ";

	//element 24 push back in array at last 
	vec.push_back(24);
	size= vec.size();//update size
	cout<<endl<<vec[size-1]<<endl; 
	
	// remove last element
	vec.pop_back();
	size= vec.size();//update size
	
	//insert 20 at the begining 
	vec.insert(vec.begin(),20);
	cout<<"element at the begining : "<<vec[0];
	
	vec.erase(vec.begin());
	cout<<endl<<vec[0];// element 20 deleted from command "erase"

	// insert element by replacing existing element 
	vec.emplace(vec.begin(),45);
	cout<<endl<<vec[0];
	
	vec.emplace_back(200);// emplace element at last
	size=vec.size();  // size update
	cout<<endl<<vec[size-1];

	//erase the vector
	vec.clear();
	cout<<"\nvector size after clear :  "<<vec.size();




	// Two vector to perform swap
	vector<int> obj1,obj2;
	obj1.push_back(10);
	obj1.push_back(20);
	obj2.push_back(50);
	obj2.push_back(1000);
	cout<<"\n\nVector(1) :  ";
	for(int i=0; i<obj1.size(); i++)
	cout<<obj1[i]<<"  ";
	cout<<"\n\nVector(2) :  ";
	for(int i=0; i<obj2.size(); i++)
	cout<<obj2[i]<<"  ";
	//swap vector
	obj1.swap(obj2);
	cout << "\n\nAfter Swap \n\nVector (1) :  "; 
    for (int i = 0; i < obj1.size(); i++) 
    cout << obj1[i] << " "; 
   
    cout << "\n\nVector (2) :  "; 
    for (int i = 0; i < obj2.size(); i++) 
    cout << obj2[i] << " "; 

	//---------------------------------   Iterator  ------------------------------

	vector <int> vec1;
	//inserting element
	for(auto i=0; i<10; i++)
	vec1.push_back(i);

	cout<<"Understanding Begin() and End() func() : "<<endl;
	//display
	for(auto i=vec1.begin(); i !=vec1.end(); i++)
	cout<<*i<<" ";

	//-----------------------------------   CAPACITY  ----------------------------

	//using vec1 

	cout<<"\nSize of our vector :   "<<vec1.size();

	cout<<"\nCapacity of our vector :  "<<vec1.capacity();

	cout<<"\nMax_size of our vector : "<<vec1.max_size();

	vec1.resize(4);
	cout<<"\nSize of our vector after resize :  "<<vec1.size();

	//check if the vector is empty or not
	if(vec1.empty())
	cout<<"\n Empty ";
	else
	cout<<"\nVector is not empty";
}