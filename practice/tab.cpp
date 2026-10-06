#include<iostream>
using namespace std;
int main()
{
	int tab, len ,n;
	cout<<"Enter number for table: ";
	cin>>tab;
	cout<<"Enter length: ";
	cin>>len;
	for(n=1;n<=len;n++)
	cout<<tab<<"*"<<n<<"="<<tab*n<<endl;
	return 0;
}
