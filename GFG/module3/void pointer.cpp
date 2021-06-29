/* 

VOID POINTERS

This is a special type of pointer available in c++ which represent absence of type.
void pointer are pointers that point to a value that has no type.
This means that void pointer have great flexibility as it can point to any data type.
But these pointers cannot be directly dereferenced. */

#include <bits/stdc++.h>
using namespace std;

void increase(void *data,int ptrsize)
{
	if(ptrsize == sizeof(char))
	{
		char *ptr_char;
		//typecast data to char pointer
		ptr_char =(char*) data;
		// increase the char stored at *ptr_char by 1
		(*ptr_char)++;
		cout<<"*data point to char ch"<<endl;
	}
	else if(ptrsize == sizeof(int))
	{
		int *ptr_to_int;
		// typecast data to char pointer
		ptr_to_int=(int *)data;
		//increase the int stored at *ptr_to_int by 1
		(*ptr_to_int)++;
		cout<<"*data point to int i"<<endl;
	}
}
void learn_special_pointer()
{
	// declare a character
	char ch='c';
	// declare a integer
	int i=9;
	// call increase function using a char and int address respectively
	increase(&ch,sizeof(ch));
	cout<<"value of ch after function call : "<<ch<<endl;
	increase(&i,sizeof(i));
	cout<<"value of i after function call : "<<i<<endl;
}
int main()
{
	learn_special_pointer();
}