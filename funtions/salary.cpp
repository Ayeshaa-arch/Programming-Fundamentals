//Write a program to input hourly rate and working hours in main function.
// Pass these values to a function which calculates and returns the salary.
// Calculated salary shoud be displayed in main function.

#include <iostream>
using namespace std;
float calculateSalary(float rate, float hours)
{
    return rate * hours;
}
int main()
{
    float hourlyRate, workingHours;
    cout << "Enter hourly rate: ";
    cin >> hourlyRate;
    cout << "Enter working hours: ";
    cin >> workingHours;
    float salary = calculateSalary(hourlyRate, workingHours);
    cout << "Salary: " << salary;
    
    return 0;
}

// or else this code---->
/*

#include<iostream>
using namespace std;

float salary(int, float);
int main()
 {
	float rate, totalsalary;
	int hours;
	
	cout<<"Enter hourly rate : ";
	cin>>rate;
	
	cout<<"Enter working hours: ";
	cin>>hours;
	
	totalsalary = salary(hours rate);
	cout<<"The salary is: "<<totalsalary;
	}
	
	float salary(int n,float r)
	{
	return r*h;
}

*/
	
