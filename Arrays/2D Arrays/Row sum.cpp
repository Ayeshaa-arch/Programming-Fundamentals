#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
	int i,j,sum = 0;
    cout << "Enter 25 values:\n";

    // Input values
    for( i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nMatrix with Row Sums:\n";

    // Display matrix and row sums
    for( i = 0; i < 5; i++)
    { 
        for( j = 0; j < 5; j++)
        {
            cout << arr[i][j] << "\t";
            sum = sum + arr[i][j];
        }

        cout << " = " << sum;
        cout << endl;
    }

    return 0;
}
