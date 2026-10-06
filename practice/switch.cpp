#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter an alphabet: ";
	cin>>c;
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		cout<<"You entered a vowel.";	
		break;
		default:
		cout<<"Not a vowel";
	}
	
	return 0;
}
