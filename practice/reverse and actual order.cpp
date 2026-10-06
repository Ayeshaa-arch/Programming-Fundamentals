#include<iostream>
using namespace std;
int main()
{
	int n[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter values: ";
		cin>>n[i];
	}
	cout<<" The arrays in actual order: ";
	for(i=0;i<5;i++)
	cout<<n[i]<<endl;
	cout<<" The arrays are in reverse order: ";
	for(i=4;i>=0;i--)
	cout<<n[i]<<endl;
	return 0;
}
