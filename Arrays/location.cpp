#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int n, i ,loc=-1;
	cout<<"Enter Array elements.: ";
	for(i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter number to find: ";
	cin>>n;
	for(i=0;i<=9;i++)
	{
		if(n==arr[i])
		{
			loc=i;
		}
	}
		if(loc==-1)
		cout<<"number not found.";
		else
		cout<<"number is found at : "<<loc+1;
		
	
	return 0;
}
