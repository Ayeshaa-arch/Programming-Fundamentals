#include<iostream>
using namespace std;
int main()
{
	int tab, len ,n;
	cout<<"Enter number for table: ";
	cin>>tab;
	cout<<"Enter length: ";
	cin>>len;
	n=1;
	while(n<=len)
	{
		cout<<tab<<"*"<<n<<"="<<tab*n<<endl;
	n++;}
	return 0;
}
