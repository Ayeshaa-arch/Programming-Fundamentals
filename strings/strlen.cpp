#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	cout<<"enter a name: ";
	cin.getline(str,30);
	cout<<"The length of a given name is: "<<strlen(str);
}
