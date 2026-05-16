#include<iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter String: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        if(str[i] == '0')
        {
            continue;
        }

        for(int n = i + 1; str[n] != '\0'; n++)
        {
            if(str[i] == str[n])
            {
                count++;
                str[n] = '0';
            }
        }

        cout << str[i] << " = " << count << endl;
    }

    return 0;
}
