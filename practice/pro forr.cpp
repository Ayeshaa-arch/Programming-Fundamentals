#include<iostream>
using namespace std;
int main()
{
	int n,pro=1;
	for(n=1;n<=10;n=n+2)
	pro *= n;
	cout<<"Result is "<<pro;
	return 0;
}
