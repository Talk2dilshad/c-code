#include <bits/stdc++.h>
using namespace std;

//this function return floating part of string number
string return_float_part(string str)
{
	int pos=str.find(".");
	if(pos==string::npos)//if floating point is not found then return empty string
	return "";
	else
	return str.substr(pos+1);
}
// this function check whether a string contain all digits
bool containsOnlyDigit(string str)
{
	int length =str.length();
	for(int i=0; i<length; i++)
	{
		if(str.at(i)<'0' || str.at(i) >'9')
		return false;
	}
	//if loop end here all character are digits
	return true;
}
// this function replace all single space used in urls
string replaceblankwith20(string str)
{
	string replaceby= "%20";
	int n=0;
	
    // loop till all space are replaced
    while ((n = str.find(" ", n)) != string::npos )
    {
        str.replace(n, 1, replaceby);
    }
    return str;
}
int main()
{
	string floating_number="21.342";
	cout<<"Floating number part :"<<return_float_part(floating_number)<<endl;

	string num="3452";
	if(containsOnlyDigit(num))
	cout<<"string contain only digit"<<endl;

	string url="google co in";
	cout<<replaceblankwith20(url)<<endl;

}