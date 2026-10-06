#include<iostream>
using namespace std;
int main()
{
	int n,c,p,arr[30],count=0;
	for(n=0;n<30;n++)
	{
		cout<<"Enter a number: ";
		cin>>arr[n];
	}
	for(n=0;n<30;n++)
	{
		p=1;
		for(c=2;c<=arr[n]/2;c++)
		if(arr[n]%c==0)
		{
			p=0;
			break;
		}
		if(p==1)
		count++;
	}
	cout<<"Total prime numbers in tha array are: "<<count;
	return 0;
}
