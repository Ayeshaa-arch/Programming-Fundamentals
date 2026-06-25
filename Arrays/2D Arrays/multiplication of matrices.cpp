#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,r1,r2,c1,c2;
	cout<<"Enter rows for matrix A: ";
	cin>>r1;
	cout<<"Enter columns for matrix A: ";
	cin>>c1;
	cout<<"Enter rows for matrix B: ";
	cin>>r2;
	cout<<"Enter columns for matrix B: ";
	cin>>c2;
	if(c1!=r2)
	{
		cout<<"Multiplication is not possible.";
		return 0;
	}
	cout<<"Enter values of matrix A \n";
	for( i=0 ; i<r1 ; i++ )
	for( j=0 ; j<c1 ; j++ )
	cin>>a[i][j];
	cout<<"Enter values of matrix B \n";
	for( i=0 ; i<r2 ; i++ )
	for( j=0 ; j<c2 ; j++)
	cin>>b[i][j];
	for( i=0 ; i<r1 ; i++ )
	{
	for( j=0 ; j<c2 ; j++ )	
	 {
		c[i][j]=0;
		for( k=0 ; k<c1 ; k++)
	c[i][j] = c[i][j] + a[i][j] * b[i][j];
	  }
	}
	cout<<"Values of matrix A are as follows \n";
	for( i=0 ; i<r2 ; i++ )
	{
		for( j=0 ; j<c2 ; j++ )
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Values of matrix B are as follows \n";
	for( i=0 ; i<r2 ; i++ )
	{
		for( j=0 ; j<c2 ; j++ )
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Product of matrix A and B are as follows \n";
	for( i=0 ; i<r1 ; i++ )
	{
		for( j=0 ; j<c1 ; j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
