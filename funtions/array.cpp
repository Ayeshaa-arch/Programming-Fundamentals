#include<iostream>
using namespace std;
void show(int arr[]);
int main()
{
	int i,num[5];
	cout<<"Enter a number: ";
	for(i=1;i<=5;i++)
	cin>>num[i];
	show(num);
	}
void show(int arr[])
{
	int n;
	cout<<"The values in array are: "<<endl;
	for(n=1;n<=5;n++)
	cout<<arr[n]<<"\t";
}
