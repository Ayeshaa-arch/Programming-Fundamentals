#include<iostream>
using namespace std;
struct student
{
	int rollNo;
	string name;
	int marks;
};
	int main()
	{
	student s;
	cout<<"Enter Student details: \n";
	cout<<"Roll no: ";
	cin>>s.rollNo;
	cout<<"Enter Name: ";
	cin>>s.name;
	cout<<"Enter marks: ";
	cin>>s.marks;
	cout<<endl;
	cout<<"Student record is as follows: \n";
	cout<<"Roll no: "<<s.rollNo<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"Marks: "<<s.marks<<endl;
	return 0;
}
