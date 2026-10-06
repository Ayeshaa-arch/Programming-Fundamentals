#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	float avg=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value: ";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	avg=sum/5;
	cout<<"Sum of the values are: "<<sum<<endl;
	cout<<"Average of the values are: "<<avg;
	return 0;
}
