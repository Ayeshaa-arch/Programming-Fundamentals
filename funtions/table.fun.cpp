#include<iostream>
using namespace std;
void table(int);
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	table(num);
	return 0;
}
void table (int n)
{
	cout<<"Table of "<<n<<" is as follows."<<endl;
	for(int c=1;c<=10 ;c++)
	cout<<n<<"*"<<c<<"="<<n*c<<endl;
}
