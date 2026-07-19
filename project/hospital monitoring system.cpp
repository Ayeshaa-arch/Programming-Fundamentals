/*
    Hospital Patient Monitoring System (Simple Version)
    ------------------------------------------
    - Structure with an array member (7-day temperature, as int)
    - Array of structures for multiple patients
    - Separate function for each feature
    - Menu-driven using loops and if/switch statements
    - No file handling, no classes, no linked lists, no vectors, no STL
*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_PATIENTS = 100;
const int DAYS = 7;

struct Patient
{
    int patientID;
    string patientName;
    int age;
    int wardNumber;
    int temperature[DAYS];   // whole-number temperatures
};

// ---------- Function Prototypes ----------
void addPatient(Patient patients[], int &count);
void displayAllPatients(Patient patients[], int count);
int findPatientIndex(Patient patients[], int count, int id);
void searchPatient(Patient patients[], int count);
void updateTemperature(Patient patients[], int count);
int calculateAverage(Patient p);
void showPatient(Patient p);
void healthReport(Patient patients[], int count);
void showMenu();

// ---------- Main ----------
int main()
{
    Patient patients[MAX_PATIENTS];
    int count = 0;
    int choice;

    do
    {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addPatient(patients, count);
                break;
            case 2:
                displayAllPatients(patients, count);
                break;
            case 3:
                searchPatient(patients, count);
                break;
            case 4:
                updateTemperature(patients, count);
                break;
            case 5:
                healthReport(patients, count);
                break;
            case 6:
                cout << "\nExiting program...\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
        cout << endl;

    } while (choice != 6);

    return 0;
}

// ---------- Menu ----------
void showMenu()
{
    cout << "=========================================\n";
    cout << "   HOSPITAL PATIENT MONITORING SYSTEM\n";
    cout << "=========================================\n";
    cout << "1. Add Patient\n";
    cout << "2. Display All Patients\n";
    cout << "3. Search Patient (by ID)\n";
    cout << "4. Update Daily Temperature\n";
    cout << "5. Patient Health Report\n";
    cout << "6. Exit\n";
    cout << "=========================================\n";
}

// ---------- 1. Add Patient ----------
void addPatient(Patient patients[], int &count)
{
    if (count >= MAX_PATIENTS)
    {
        cout << "\nPatient list is full!\n";
        return;
    }

    Patient p;
    cout << "\n--- Add New Patient ---\n";

    cout << "Enter Patient ID: ";
    cin >> p.patientID;

    cout << "Enter Patient Name: ";
    cin >> p.patientName;   // single word name (keeps input simple)

    cout << "Enter Age: ";
    cin >> p.age;

    cout << "Enter Ward Number: ";
    cin >> p.wardNumber;

    cout << "Enter Body Temperature for 7 days (whole numbers):\n";
    for (int i = 0; i < DAYS; i++)
    {
        cout << "  Day " << (i + 1) << ": ";
        cin >> p.temperature[i];
    }

    patients[count] = p;
    count++;

    cout << "\nPatient added successfully!\n";
}

// ---------- 2. Display All Patients ----------
void displayAllPatients(Patient patients[], int count)
{
    if (count == 0)
    {
        cout << "\nNo patient records found.\n";
        return;
    }

    cout << "\n--- All Patients ---\n";
    for (int i = 0; i < count; i++)
        showPatient(patients[i]);
}

// Helper: print one patient's full record + average
void showPatient(Patient p)
{
    cout << "-----------------------------\n";
    cout << "ID     : " << p.patientID << endl;
    cout << "Name   : " << p.patientName << endl;
    cout << "Age    : " << p.age << endl;
    cout << "Ward   : " << p.wardNumber << endl;
    cout << "Temperatures (Day 1-7): ";
    for (int i = 0; i < DAYS; i++)
        cout << p.temperature[i] << " ";
    cout << endl;
    cout << "Average Temperature: " << calculateAverage(p) << endl;
    cout << "-----------------------------\n";
}

// ---------- Helper: find patient by ID ----------
int findPatientIndex(Patient patients[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (patients[i].patientID == id)
            return i;
    }
    return -1;
}

// ---------- 3. Search Patient ----------
void searchPatient(Patient patients[], int count)
{
    int id;
    cout << "\nEnter Patient ID to search: ";
    cin >> id;

    int index = findPatientIndex(patients, count, id);

    if (index == -1)
        cout << "\nPatient Record Not Found.\n";
    else
        showPatient(patients[index]);
}

// ---------- 4. Update Daily Temperature ----------
void updateTemperature(Patient patients[], int count)
{
    int id;
    cout << "\nEnter Patient ID: ";
    cin >> id;

    int index = findPatientIndex(patients, count, id);
    if (index == -1)
    {
        cout << "\nPatient Record Not Found.\n";
        return;
    }

    int day;
    cout << "Enter Day to update (1-7): ";
    cin >> day;

    if (day < 1 || day > DAYS)
    {
        cout << "\nInvalid day!\n";
        return;
    }

    int newTemp;
    cout << "Enter new temperature: ";
    cin >> newTemp;

    patients[index].temperature[day - 1] = newTemp;
    cout << "\nTemperature updated successfully!\n";
}

// ---------- 5. Average Temperature ----------
int calculateAverage(Patient p)
{
    int sum = 0;
    for (int i = 0; i < DAYS; i++)
        sum += p.temperature[i];
    return sum / DAYS;   // integer average
}

// ---------- 6-10. Health Report (highest, lowest, fever days, status) ----------
void healthReport(Patient patients[], int count)
{
    if (count == 0)
    {
        cout << "\nNo patient records found.\n";
        return;
    }

    int id;
    cout << "\nEnter Patient ID: ";
    cin >> id;

    int index = findPatientIndex(patients, count, id);
    if (index == -1)
    {
        cout << "\nPatient Record Not Found.\n";
        return;
    }

    Patient p = patients[index];

    // Highest and lowest
    int highest = p.temperature[0];
    int highDay = 1;
    int lowest = p.temperature[0];
    int lowDay = 1;
    int feverDays = 0;

    for (int i = 0; i < DAYS; i++)
    {
        if (p.temperature[i] > highest)
        {
            highest = p.temperature[i];
            highDay = i + 1;
        }
        if (p.temperature[i] < lowest)
        {
            lowest = p.temperature[i];
            lowDay = i + 1;
        }
        if (p.temperature[i] >= 38)
            feverDays++;
    }

    int avg = calculateAverage(p);

    // Health status
    string status;
    if (avg >= 36 && avg <= 37)
        status = "Normal";
    else if (avg == 38 || avg == 39 || avg == 40)
        status = "Needs Medical Attention";
    else
        status = "Under Observation";

    cout << "\n=========================================\n";
    cout << "   HEALTH REPORT - " << p.patientName << " (ID: " << p.patientID << ")\n";
    cout << "=========================================\n";
    cout << "Average Temperature : " << avg << endl;
    cout << "Highest Temperature : " << highest << " (Day " << highDay << ")\n";
    cout << "Lowest Temperature  : " << lowest << " (Day " << lowDay << ")\n";
    cout << "Fever Days          : " << feverDays << endl;
    cout << "Health Status       : " << status << endl;
    cout << "=========================================\n";
}
