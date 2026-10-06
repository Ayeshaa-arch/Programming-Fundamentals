#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int arr[10],i;
	for(i=0;i<=9;i++)
	{
		arr[i]=rand()%100;
	}
	for(i=0;i<=9;i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}
