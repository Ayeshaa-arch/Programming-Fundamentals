#include<iostream>
using namespace std;
int main()
{
	char str[]="Hello World.";
	cout<<"The string value is: "<<str<<endl;
	char str1[30];
	/*cout<<"Enter string name: ";
	cin>>str1;
	cout<<"You entered string name : "<<str1<<endl;
	*/
	char name[20];
	cout<<"Enter name: ";
	cin.getline(name,20);
	cout<<"You entered name: "<<name<<endl;
	return 0;
}
