#include <iostream>
using namespace std;
int main()
{
	int numbers[5],squares[5],cubes[5],sums[5],total=0;
	int i;
	for(i=0;i<5;i++)
	{
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]= numbers[i]+squares[i]+cubes[i];
	}
	cout<<"Numbers: ";
	for(i=0;i<5;i++)
	{
	cout<<numbers[i]<<"\t";
	}
	cout<<endl;
	cout<<"Squares: ";
	for(i=0;i<5;i++)
	{
	cout<<squares[i]<<"\t";
	}
	cout<<endl;
	cout<<"Cubes: ";
	for(i=0;i<5;i++)
	{
	cout<<cubes[i]<<"\t";
	}
	cout<<endl;
	cout<<"Sums: ";
	for(i=0;i<5;i++)
	{
	cout<<sums[i]<<" \t";
	total=total+sums[i];
	}
	cout<<endl;
	cout<<"Grand Total: "<<total<<endl;
	
	return 0;
}
