#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s[5];
    
    int pass = 0;
    int fail = 0;
    float total = 0;
    // Input
    cout << "Enter Student Details\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter record of Student " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display
    cout << "\n\nStudent Records\n";
	cout<<"================================================\n\n";
	cout<<"Roll No:\tName\tMarks\n";
	cout<<"================================================\n\n";
    for(int i = 0; i < 5; i++)
    {
    	//cout<<"Record of Student "<<i+1<<endl;
        cout <<s[i].rollNo<<"\t\t";
        cout << s[i].name<<"\t";
        cout << s[i].marks << endl;
    }

    int highestIndex = 0;
    int lowestIndex = 0;

    for(int i = 1; i < 5; i++)
    {
    	// Highest Marks
        if(s[i].marks > s[highestIndex].marks)
        {
            highestIndex = i;
        }
        
        // Lowest Marks
        if(s[i].marks < s[lowestIndex].marks)
        {
            lowestIndex = i;
        }
        
        // Average Marks
    	// Pass/Fail
        total += s[i].marks;
        if(s[i].marks >= 50)
            pass++;
        else
            fail++;
    }

    cout << "\nStudent with Highest Marks\n";
    cout << "Roll No: " << s[highestIndex].rollNo << endl;
    cout << "Name: " << s[highestIndex].name << endl;
    cout << "Marks: " << s[highestIndex].marks << endl;

    cout << "\nStudent with Lowest Marks\n";
    cout << "Roll No: " << s[lowestIndex].rollNo << endl;
    cout << "Name: " << s[lowestIndex].name << endl;
    cout << "Marks: " << s[lowestIndex].marks << endl;

    float average = total / 5.0;
    cout << "\nAverage Marks = " << average << endl;
    cout << "\nPassed Students = " << pass;
    cout << "\nFailed Students = " << fail;

    return 0;
}
