#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[30];
	cout<<"Enter a String: ";
	cin>>str;
	strrev(str);
	cout<<"The reverse of a given string is : "<<str;
	return 0;
}
