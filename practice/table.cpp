#include<iostream>
using namespace std;
int main()
{
	int n,t;
	t=1;
	cout<<"Enter a number: ";
	cin>>n;
	while(t<=10)
	{
		cout<<n<<"*"<<t<<"="<<n*t<<endl;
		t++;
	}
	
	return 0;
}
