#include<iostream>
using namespace std;
int main()
{
	int a[5],i,j,tmpr;
	cout<<"Enter array values: ";
	for(i=0 ; i<5 ; i++)
	cin>>a[i];
	cout<<"Array values before sorting\n";
	for(i=0 ; i<5 ; i++)
	cout<<a[i]<<"\t";
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<4-i ; j++)
		{
			if(a[j] > a[j+1])
			{
				tmpr = a[j];
				a[j] = a[j+1];
				a[j+1] = tmpr;
			}
				}		
	}
	cout<<"\nArray after sorting\n";
	for(i=0 ; i<5 ; i++)
	cout<<a[i]<<"\t";
	return 0;
}
