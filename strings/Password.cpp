#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char password[50];
    int length = 0;
    bool upper = false, digit = false;

    cout << "Enter Password: ";
    cin >> password;

    length = strlen(password);

    for(int i = 0; password[i] != '\0'; i++)
    {
        if(password[i] >= 'A' && password[i] <= 'Z')
        {
            upper = true;
        }

        if(password[i] >= '0' && password[i] <= '9')
        {
            digit = true;
        }
    }

    if(length >= 8 && upper && digit)
    {
        cout << "Strong Password";
    }
    else
    {
        cout << "Weak Password";
    }

    return 0;
}
