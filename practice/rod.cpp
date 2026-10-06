#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int arr[10],i,loc=-1,n;
	for(i=0;i<10;i++)
	{
		arr[i]=rand()%100;
		cout<<arr[i]<<endl;
	}
	cout<<"Enter number to find: ";
	cin>>n;
	for(i=0;i<10;i++)
	{
		if(n==arr[i])
		loc=i;
		
	}
	if(loc==-1)
	cout<<"Number not found.";
	else
	cout<<"Number found at:"<<loc+1;

	return 0;
}
