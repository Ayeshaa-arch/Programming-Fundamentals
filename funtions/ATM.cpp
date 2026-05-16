#include <iostream>
using namespace std;
double deposit(double balance, double amount)
 {
    if (amount > 0) 
		balance = balance + amount;
    else 
		cout << "Invalid deposit amount.\n";
    return balance;
}

double withdraw(double balance, double amount)
 {
    if (amount > 0 && amount <= balance) 
		balance = balance - amount;
    else 
		cout << "Insufficient funds or invalid amount.\n";
    return balance;
}

void displayBalance(double balance) 
{
    cout << "Current balance: $" << balance << endl;
}

int main() 
{
    double balance = 0.0;
    int choice;
    double amount;	
	do {
			cout << "\n--- Bank Menu ---\n";
		    cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
		    cout << "Enter Choice: ";
		    cin >> choice;
		
		    switch (choice) {
		        case 1:
		            cout << "Amount to deposit: $";
		            cin >> amount;
		            balance = deposit(balance, amount);
		            break;
		        case 2:
		            cout << "Amount to withdraw: $";
		            cin >> amount;
		            balance = withdraw(balance, amount);
		            break;
		        case 3:
		            displayBalance(balance);
		            break;
		        case 4:
		            cout << "Goodbye.\n";
		            break;
		        default:
		            cout << "Invalid option.\n";
		        }
		    } while (choice != 4);
	    

    return 0;
}
