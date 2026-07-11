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
    student s[5];   // Array of 5 students

    cout << "Enter details of 5 students:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }
    

    cout << "\n----- Student Records -----\n";
	cout << "Roll No \t Name \t Marks" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: " << s[i].rollNo << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}
