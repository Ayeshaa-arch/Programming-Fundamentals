#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	float avg;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value: ";
		cin>>arr[i];
		sum=sum+arr[i];
		}
		avg=sum/5.0;
	  
		{
			cout<<"Sum: "<<sum<<endl;
			cout<<"Average: "<<avg;
		}
	return 0;
}
