//Write a program to input a number in main function, pass this number to another function,
// the function should return whether the number is prime or not. Display the result in main function.

#include <iostream>
using namespace std;
int Prime(int num)
{
    if(num <= 1)
        return 0;
    for(int i=2 ; i<=num/2 ; i++)
    {
        if(num % i == 0)
            return 0; // return 0 is for not prime ,because the function is
			          //  in int if its in bool than we woulod write true false instead of 0 & 1.
    }
    return 1; // return 1 is for prime 
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(Prime(n))
        cout << "Number is Prime";
    else
        cout << "Number is Not Prime";

    return 0;
}
