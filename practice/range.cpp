#include<iostream>
using namespace std;
int main()
{
	int n,s,e;
	cout<<"Enter starting point: ";
	cin>>s;
	cout<<"Enter ending point: ";
	cin>>e;
	n=s;
	while(n<=e)
	{
		if(n%2==0)
		cout<<n<<endl;
		n++;
		
	}
	return 0;
}
