/*
==================================================================
    HOSPITAL PATIENT MONITORING SYSTEM
    ------------------------------------------------------------
    This program allows hospital staff to:
      1. Add new patients along with 7-day temperature records
      2. Display all patient records
      3. Search for a patient by ID
      4. Update a patient's temperature for a specific day
      5. Generate a full health report for a patient
      6. Exit the program

    Design Notes:
      - Structure with an array member (7-day temperature, as int)
      - Array of structures for multiple patients
      - Separate function for each feature
      - Menu-driven using loops and if/switch statements
      - No file handling, no classes, no linked lists, no vectors, no STL
==================================================================
*/

#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------
// GLOBAL CONSTANTS
// MAX_PATIENTS -> maximum number of patients the array can hold
// DAYS         -> number of days we track temperature for (1 week)
// ------------------------------------------------------------
const int MAX_PATIENTS = 100;
const int DAYS = 7;

// ------------------------------------------------------------
// STRUCT: Patient
// Groups all information related to ONE patient into a single
// custom data type. This makes it easy to store and pass around
// a patient's complete record using one variable.
// ------------------------------------------------------------
struct Patient
{
    int patientID;              // Unique ID number for the patient
    string patientName;         // Patient's name
    int age;                    // Patient's age
    int wardNumber;              // Hospital ward the patient is admitted to
    int temperature[DAYS];      // Array storing whole-number temperature readings for 7 days
};

// ------------------------------------------------------------
// FUNCTION PROTOTYPES(declaration)
// Declaring functions in advance so they can be used in main()
// before their actual definitions appear later in the file.
// ------------------------------------------------------------
void addPatient(Patient patients[], int &count); // int&count ---------> pass by reference
void displayAllPatients(Patient patients[], int count);// int----> count pass by value
int findPatientIndex(Patient patients[], int count, int id);
void searchPatient(Patient patients[], int count);
void updateTemperature(Patient patients[], int count);
float calculateAverage(Patient p);
void showPatient(Patient p);
void healthReport(Patient patients[], int count);
void showMenu();

// ------------------------------------------------------------
// MAIN FUNCTION
// Program execution starts here. Holds the array of patients
// and keeps showing the menu until the user chooses to exit.
// ------------------------------------------------------------
int main()
{
    Patient patients[MAX_PATIENTS];   // Array to hold up to 100 patient records
    int count = 0;                    // Tracks how many patients are currently stored
    int choice;                       // Stores the user's menu selection

    // ------------------------------------------------------------
    // MAIN PROGRAM LOOP
    // Keeps showing the menu and processing choices until the
    // user selects option 6 (Exit).
    // ------------------------------------------------------------
    do
    {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        // ---------- Process User's Choice ----------
        switch (choice)
        {
            case 1:
                addPatient(patients, count);       // Add a new patient record
                break;
            case 2:
                displayAllPatients(patients, count); // Show all stored patients
                break;
            case 3:
                searchPatient(patients, count);      // Find a patient by ID
                break;
            case 4:
                updateTemperature(patients, count);  // Update one day's temperature
                break;
            case 5:
                healthReport(patients, count);       // Show full health report
                break;
            case 6:
                cout << "\nExiting program...\n";    // End the program
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
        cout << endl;

    } while (choice != 6);   // Loop continues until user chooses to exit

    return 0;
}

// ------------------------------------------------------------
// MENU
// Displays the list of available options to the user.
// Pure output function — no calculations happen here.
// ------------------------------------------------------------
void showMenu()              // function definition
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

// ------------------------------------------------------------
// ADD PATIENT
// Takes patient details as input from the user, including
// 7 days of temperature readings, and stores them in the array.
// ------------------------------------------------------------
void addPatient(Patient patients[], int &count)
{
    // Check if the array is already full before adding a new patient
    if (count >= MAX_PATIENTS)
    {
        cout << "\nPatient list is full!\n";
        return;
    }

    Patient p;   // Temporary patient object to collect input
    cout << "\n--- Add New Patient ---\n";

    cout << "Enter Patient ID: ";
    cin >> p.patientID;

    cout << "Enter Patient Name: ";
    cin.ignore();
	getline(cin, p.patientName); 

    cout << "Enter Age: ";
    cin >> p.age;

    cout << "Enter Ward Number: ";
    cin >> p.wardNumber;

    cout << "Enter Body Temperature for 7 days (whole numbers):\n";

    // Loop through all 7 days and store each temperature reading
    for (int i = 0; i < DAYS; i++)
    {
        cout << "  Day " << (i + 1) << ": ";
        cin >> p.temperature[i];
    }

    patients[count] = p;   // Save the new patient into the main array
    count++;               // Increase patient count since a new record was added

    cout << "\nPatient added successfully!\n";
}

// ------------------------------------------------------------
// DISPLAY ALL PATIENTS
// Loops through every stored patient and prints their full
// record using the showPatient() helper function.
// ------------------------------------------------------------
void displayAllPatients(Patient patients[], int count)
{
    // If no patients exist yet, inform the user and exit the function
    if (count == 0)
    {
        cout << "\nNo patient records found.\n";
        return;
    }

    cout << "\n--- All Patients ---\n";

    // Loop through each patient record
    for (int i = 0; i < count; i++)
        showPatient(patients[i]);
}
// ------------------------------------------------------------
// SHOW PATIENT (Helper)
// Prints one patient's full record, including all 7 daily
// temperatures and their average.
// ------------------------------------------------------------
void showPatient(Patient p)
{
    cout << "-----------------------------\n";
    cout << "ID     : " << p.patientID << endl;
    cout << "Name   : " << p.patientName << endl;
    cout << "Age    : " << p.age << endl;
    cout << "Ward   : " << p.wardNumber << endl;
    cout << "Temperatures (Day 1-7):\n ";

    // Inner loop prints each of the 7 daily temperature readings
    for (int i = 0; i < DAYS; i++)
        cout <<" Day "<<i+1<<" : "<< p.temperature[i] << " C \n ";
    cout << endl;

    cout << "Average Temperature:  " << calculateAverage(p) <<" C "<< endl;
    cout << "-----------------------------\n";
}

// ------------------------------------------------------------
// FIND PATIENT INDEX (Helper)
// Searches the array for a patient with a matching ID.
// Returns the index of the patient if found, otherwise -1.
// Used by searchPatient(), updateTemperature(), and healthReport().
// ------------------------------------------------------------
int findPatientIndex(Patient patients[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (patients[i].patientID == id)
            return i;          // Match found -> return its index
    }
    return -1;                 // No match found in the entire array
}

// ------------------------------------------------------------
// SEARCH PATIENT
// Asks the user for a patient ID, finds it using
// findPatientIndex(), and displays the record if found.
// ------------------------------------------------------------
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

// ------------------------------------------------------------
// UPDATE TEMPERATURE
// Lets the user change the temperature reading for a specific
// day (1-7) for a chosen patient.
// ------------------------------------------------------------
void updateTemperature(Patient patients[], int count)
{
    int id;
    cout << "\nEnter Patient ID: ";
    cin >> id;

    // Reuse findPatientIndex() to locate the patient
    int index = findPatientIndex(patients, count, id);
    if (index == -1)
    {
        cout << "\nPatient Record Not Found.\n";
        return;   // Exit early if patient doesn't exist
    }

    int day;
    cout << "Enter Day to update (1-7): ";
    cin >> day;

    // Validate that the day entered is within the valid range
    if (day < 1 || day > DAYS)
    {
        cout << "\nInvalid day!\n";
        return;
    }

    // Update the temperature for the chosen day (array index = day-1)
    int newTemp;
    cout << "Enter new temperature: ";
    cin >> newTemp;

    patients[index].temperature[day - 1] = newTemp;
    cout << "\nTemperature updated successfully!\n";
}

// ------------------------------------------------------------
// AVERAGE TEMPERATURE
// Calculates and returns the average of a patient's 7-day
// temperature readings.
// ------------------------------------------------------------
float calculateAverage(Patient p)
{
    int sum = 0;

    // Add up all 7 daily readings
    for (int i = 0; i < DAYS; i++)
        sum += p.temperature[i];

    return (float) sum / DAYS;   // integer average (decimal part gets dropped)
}

// ------------------------------------------------------------
// HEALTH REPORT
// Combines highest, lowest, fever days, and overall status
// into a single complete health report for one patient.
// ------------------------------------------------------------
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

    Patient p = patients[index];   // Local copy for easy access

    // Start by assuming Day 1 is both the highest and lowest
    int highest = p.temperature[0];
    int highDay = 1;
    int lowest = p.temperature[0];
    int lowDay = 1;
    int feverDays = 0;             // Counter for days with fever (>=38)

    // Compare each day's temperature to find max, min, and fever count
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
            feverDays++;    // Increment counter each time a fever day is found
    }

    float avg = calculateAverage(p);

    // Decision logic based on average temperature ranges
    string status;
    if (avg >= 36 && avg <= 37)
        status = "Normal";
    else if (avg == 38 || avg == 39 || avg == 40)
        status = "Needs Medical Attention";
    else
        status = "Under Observation";

    // Print the final formatted report
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
