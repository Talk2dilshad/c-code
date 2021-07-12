#include <bits/stdc++.h>
using namespace std;

int main()
{
	string alphabet{" [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key{"[ JASDLKFJKJDASFklsjdfgiosernoisdvJIGOSDNGREIOnfgsdnir"};

	string secret_message{};
	cout<<"Enter secret message : ";

	getline(cin,secret_message);
	string encrypted_message;
	
	cout<<"\nEncrypted Message : ";
	for(char c : secret_message)
	{
		unsigned int position = alphabet.find(c);
		if(position != string::npos)
		{
			char new_char {key.at(position)};
			encrypted_message += new_char;
		}
		else
		encrypted_message += c;
	}
	cout<<encrypted_message;
}