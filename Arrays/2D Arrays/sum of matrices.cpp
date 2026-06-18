#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int i,j,sum = 0;

    cout << "Enter 9 values:\n";

    //for rows
    for( i = 0; i < 3; i++)
    {
    	//for columns
        for(j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    //for rows
    for( i = 0; i < 3; i++)
    {
    //for columns
        for(j = 0; j < 3; j++)
        {
        sum = sum + arr[i][j];	
    }
}

    cout << "Sum of all elements = " << sum;

    return 0;
}
