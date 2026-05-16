#include<iostream>
using namespace std;
int main()
{
	char str[30];
	int count, i ;
	cout<<"Enter a string: ";
	cin.getline(str,30);
	count=0;
	i=0;
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case'A':
			case'a':
			case'E':
			case'e':
			case'I':
			case'i':
			case'O':
			case'o':
			case'U':
			case'u':
			count++;
			break;
		}
		i++;
	}
	cout<<"The string has "<<count<<" vowels."<<endl;
	return 0;
}
