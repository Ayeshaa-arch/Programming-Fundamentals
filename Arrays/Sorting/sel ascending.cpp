#include<iostream>
using namespace std;
int main()
{
	int a[5],i,n,tmpr;
	cout<<"Enter array values: ";
	for(i=0 ; i<5 ; i++)
	cin>>a[i];
	cout<<"Array values before sorting\n";
	for(i=0 ; i<5 ; i++)
	cout<<a[i]<<"\t";
	for(i=0 ; i<4 ; i++)
	{
		for(n=i+1 ; n<5 ; n++)
		{
			if(a[i] > a[n])
			{
				tmpr = a[i];
				a[i] = a[n];
				a[n] = tmpr;
			}
				}		
	}
	cout<<"Array after sorting\n";
	for(i=0 ; i<5 ; i++)
	cout<<a[i]<<"\t";
	return 0;
}
