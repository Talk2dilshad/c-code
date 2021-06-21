#include <bits/stdc++.h>
using namespace std;

void input_func()
{
	// c++ has its definition a way to represent sequence of character as an object of class called " string "

	// Input function
	/* 
	1. getline() : this function is used to store a stream of character as entered by the user in the object memory
	2. push_back() : this function is used to input a character at the end of the string 
	3. pop_back() : this function is used to delete the last character from the string 

	*/

	// declaring string 
	string str;

	getline(cin,str);// taking input from user
	cout<<"String :  "<<str<<endl;

	// using push_back() to insert a character at end
	str.push_back('s');

	cout<<"string after push_back() : "<<str<<endl;
	// using pop_back function
	str.pop_back();
	cout<<"string after pop_back() : "<<str<<endl;

}

void capacity()
{
	/*
	CAPACITY FUNCTION 
	CAPACITY() : THIS FUNCTION RETURN CAPACITY ALLOCATED TO THE STRING 
	
	RESIZE(): THIS FUNCTION CHANGE SIZE OF STRING

	LENGTH(): THIS FUNCTION FIND THE LENGTH OF STRING

	shrink_to_fit(): this function decrease the capacity of the string and make it equal to minimum capacity of the string 
	*/

	// initializing the string 
	string str2= "Learning is the key to master arts";
	cout<<"string before resize() : "<<str2<<endl;
	
	str2.resize(19);
	cout<<"The string after resize() : "<<str2<<endl;

	cout<<str2.capacity()<<endl;
	cout<<"The length of string : "<<str2.length()<<endl;

	//decreasing the capacity of the string 
	str2.shrink_to_fit();
	cout<<"str2 capacity after shrink to fit() : "<<str2.capacity()<<endl;

}
void iterator_func()
{
	/*
	ITERATOR FUNCTION()
	
	1. BEGIN() : THIS FUNCTION RETURN AN INTERATOR TO BEGINNING OF THE STRING
	2. END() : THIS FUNCTION RETURN AN ITERATOR TO END OF THE STRING
	3. RBEGIN(): THIS FUNCTION RETURN A REVERSE ITERATOR POINTING AT THE END OF THE STRING
	REND() : THIS FUNCTION RETURN A REVERSE ITERATOR POINTING AT BEGINNING OF THE STRING 
	*/
	//initialize the string
	string str3= "Love to code";
	// declaring iterator
	string::iterator forward;
	//declaring reverse iterator 
	string::reverse_iterator reverse;
	for(forward=str3.begin();forward != str3.end(); forward++)
	cout<<*forward;cout<<endl;
	//display the reverse the string
	for(reverse=str3.rbegin();reverse != str3.rend(); reverse++)
	cout<<*reverse;cout<<endl;
	str3.erase();
}
void Manipulation_func()
{
	// copy("char array ",len, pos) : this function copies the substring in target character array as mentioned in its arguments.
	// swap() : this function swaps one string with other.
	string str1="geeksforgeeks is for geeks";
	string str2="geeksforgeeks rocks";
	char ch[100];// declaring character array
	//using copy() to copy elements into character array
	str2.copy(ch,13,0);
	//display char array
	cout<<"The new copied character array : "<<ch<<endl<<endl;
	cout<<"display strings before swapping : "<<endl;
	cout<<str1<<endl<<str2<<endl;
	cout<<"using swap() to swap string content"<<endl;
	str1.swap(str2);
	// display strings after swapping
	cout<<str1<<endl<<str2<<endl;
	return;
}

void constructor_func()
{
	cout<<endl<<"Constructor function()"<<endl<<endl;
	//initialization by raw string
	string str1("first string");
	// initialization by another string
	string str2(str1);

	// initialization by character with number of occurance
	string str3(10,'$');
	
	//initialization by part of another string from index(second parameter) and no. of character (third parameter)
	string str4(str1,6,6);

	//initialization by part of another stirng : iterator version
	string str5(str2.begin(),str2.begin()+5);
	
	//display ...
	cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4<<endl<<str5<<endl;

	// ASSIGNMENT OPERATOR
	string str6=str4;

	//clear function delete all charater from the string
	str4.clear();

	// both size()and length() return length of the string and they work as synoyms
	int len=str6.length();

	cout<<"Length of string :  "<<len<<endl;

	// a particular character can be accessed using at [] operator;
	char ch= str6.at(2);

	cout<<"third character of string :  "<<ch<<endl;

	char ch_front=str6.front();
	char ch_back=str6.back();
	cout<<"first character : "<<ch_front<<endl<<"last character : "<<ch_back<<endl;

	// c_str returns null terminated char array version of string
	const char* charstr= str6.c_str();
	printf("%s\n",charstr);
	str6.append(" extension");

	str4.append(str6,0,6);
	
	cout<<"str6 :  "<<str6<<endl;
	cout<<"str4 :  "<<str4<<endl;
	
	// find return index where pattern is found
	// if pattern is not there it returns predefined
	// constant npos whose value is -1
	if(str6.find(str4) != string::npos)
	cout<<"str4 found in str6 at  "<<str6.find(str4)<<" pos"<<endl;
	else cout<<"Not found "<<endl;

	// substring :: substr(a,b) function return a substring of b length from index a
	cout<<str6.substr(7,3)<<endl;
	// if second argument is not passed , string till end is taken as substring 
	cout<<str6.substr(7)<<endl;

	// Erase :: erase(a,b) deletes b character from index a
	str6.erase(7,4);
	cout<<"erase : "<<str6<<endl;
	// iterator version of erase
	str6.erase(str6.begin()+5,str6.end()-3);
	cout<<str6<<endl;
	str6="This is a examples";
	// replace (a,b,str) replaces b character from a index by str
	str6.replace(2,7,"ese are test");
	cout<<str6<<endl;
}

int main()
{	
	// input_func();
	//capacity();
	iterator_func();
	Manipulation_func();
	constructor_func();
	return 0;
}
