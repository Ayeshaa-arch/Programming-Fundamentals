#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	int i,min;
	for(i=0;i<10;i++)
	{
		cout<<"Enter number : ";
		cin>>arr[i];
	}
	min=arr[0];
	for(i=0;i<10;i++)
	if(min>arr[i])
	min=arr[i];
	cout<<"Minimum number is: "<<min;
	
	return 0;
}
