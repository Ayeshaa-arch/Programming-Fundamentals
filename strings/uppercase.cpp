#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[30];
	cout<<"Enter a string: ";
	cin.getline(str1,30);
	cout<<"Upper case of the given string is : \t"<<strupr(str1)<<endl;

	cout<<"The length of a string is : \t"<<strlen(str1);
	return 0;
}
