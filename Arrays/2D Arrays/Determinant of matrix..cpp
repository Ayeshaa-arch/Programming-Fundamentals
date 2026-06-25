#include<iostream>
using namespace std;
int main()
{
	int a[2][2];
	int i,j,det;
	cout<<"Enter values: ";
	for( i=0 ; i<2 ; i++ )
	for( j=0 ; j<2 ; j++ )
	cin>>a[i][j];
	cout<<"Original matrix is \n";
	for( i=0 ; i<2 ; i++ )
	{
		for( j=0 ; j<2 ; j++ )
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for( i=0 ; i<3 ; i++ )
	
	for( j=0 ; j<3 ; j++ )

	det = ( a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	
	cout<<"Determinant of matrix = "<<det;
	return 0;
}
