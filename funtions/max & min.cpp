#include<iostream>
using namespace std;
void max(int arr[],int len);
void min(int arr[],int len);
int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int a[n],i;
	cout<<"Enter arrray values: ";
	for(i=0 ; i<n ; i++)
	cin>>a[i];
	max(a,n);
	min(a,n);
	return 0;
}

void max(int arr[],int len)
{
	int m= arr[0];
	for(int i=1 ; i<len ; i++)
	if ( arr [i]>m)
	m=arr[i];
	cout<<"Maximum number in array : "<<m<<endl;
}

void min(int arr[],int len)
{
	int m= arr[0];
	for(int i=1 ; i>len ; i++)
	if ( arr [i]<m)
	m=arr[i];
	cout<<"Minimum number in array : "<<m<<endl;
}


