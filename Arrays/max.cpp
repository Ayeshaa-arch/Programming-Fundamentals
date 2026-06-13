#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size]; 
	int i,max;
	for(i=0;i<10;i++)
	{
		cout<<"Enter number: "<<endl;
		cin>>arr[i];
	 } 
	 max=arr[0];
	 for(i=0;i<10;i++)
	 if(max<arr[i])
	 max=arr[i];
	 cout<<"Maximum value: "<<max;
	return 0;
}
