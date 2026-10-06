#include<iostream>
using namespace std;
int main()
{
	int n ,s,e;
	cout<<"Enter starting point: ";
	cin>>s;
	cout<<"enter ending point: ";
	cin>>e;
	n=s;
	do
	{
		if(n%2!=0)
		cout<<n<<endl;
		n++;
	}
	while(n<=e);
	return 0;
}
