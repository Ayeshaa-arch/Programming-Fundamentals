// Write a program to input a decimal number in main function,
// pass this number to another function which displays its binary.

#include <iostream>
using namespace std;
void decimalToBinary(int num)
{
    int binary[32];
    int i = 0;
    while(num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout << "Binary: ";
    for(int n = i-1 ; n >= 0; n--)
    {
        cout << binary[n];
    }
}
int main()
{
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    decimalToBinary(number);

    return 0;
}
