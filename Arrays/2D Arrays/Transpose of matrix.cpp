#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	int i,j;
	cout<<"Enter values: ";
	for( i=0 ; i<3 ; i++ )
	for( j=0 ; j<3 ; j++ )
	cin>>a[i][j];
	cout<<"Original matrix is \n ";
	for( i=0 ; i<3 ; i++ )
	{
		for( j=0 ; j<3 ; j++ )
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Transpose of matrix is \n";
	for( i=0 ; i<3 ; i++ )
	{
		for( j=0 ; j<3 ; j++ )
		{
			cout<<a[j][i]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
