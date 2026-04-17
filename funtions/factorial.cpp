#include<iostream>
using namespace std;
void fact(int);
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	fact(n);
	return 0;
}
void fact (int n)
{
	int c,f;
	f=1;
	cout<<"Factorial of "<<n<<" is : ";
	for(c=1;c<=n;c++)
	f=f*c;
	cout<<f<<endl;
}
