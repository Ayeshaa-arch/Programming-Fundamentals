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
    student s[5];
    int highest = 0, lowest = 0;

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

    // Find highest and lowest marks
    for(int i = 1; i < 5; i++)
    {
        if(s[i].marks > s[highest].marks)
        {
            highest = i;
        }

        if(s[i].marks < s[lowest].marks)
        {
            lowest = i;
        }
    }

    cout << "\nStudent with Highest Marks\n";
    cout << "Roll No: " << s[highest].rollNo << endl;
    cout << "Name: " << s[highest].name << endl;
    cout << "Marks: " << s[highest].marks << endl;

    cout << "\nStudent with Lowest Marks\n";
    cout << "Roll No: " << s[lowest].rollNo << endl;
    cout << "Name: " << s[lowest].name << endl;
    cout << "Marks: " << s[lowest].marks << endl;

    return 0;
}
