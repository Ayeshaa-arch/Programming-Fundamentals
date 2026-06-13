#include <iostream>
using namespace std;
int main()
{
	int n ,c,p,count=0,arr[30];
	for(n=0;n<=30;n++)
	{
	cout<<"Enter numbers : ";
	cin>>arr[n];
	}
	for(n=0;n<=30;n++)
	{
		p=1;
		for(c=2;c<=arr[n]/2;c++)
		if(arr[n]%c==0)
		{
			p=0;
			break;
		}
		if(p==0)
		count++;
	}
	return 0;
}
