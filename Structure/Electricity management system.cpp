#include<iostream>
#include<string>
using namespace std;

struct Customer
{
    int id;
    string name;
    int units[12];
};

int input(Customer c[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter Details of Customer "<<i+1<<endl;

        cout<<"Customer ID: ";
        cin>>c[i].id;

        cin.ignore();

        cout<<"Customer Name: ";
        getline(cin,c[i].name);

        cout<<"Enter Electricity Units for 12 Months:\n";

        for(int j=0; j<12; j++)
        {
            cout<<"Month "<<j+1<<": ";
            cin>>c[i].units[j];
        }
    }
    return 0;
}

int annualUnits(Customer c)
{
    int total=0;

    for(int i=0; i<12; i++)
    {
        total=total+c.units[i];
    }

    return total;
}

int highestMonth(Customer c)
{
    int max=c.units[0];
    int month=1;

    for(int i=1; i<12; i++)
    {
        if(c.units[i]>max)
        {
            max=c.units[i];
            month=i+1;
        }
    }

    cout<<"Highest Consumption Month: "<<month;
    cout<<" ("<<max<<" Units)"<<endl;

    return month;
}

int lowestMonth(Customer c)
{
    int min=c.units[0];
    int month=1;

    for(int i=1; i<12; i++)
    {
        if(c.units[i]<min)
        {
            min=c.units[i];
            month=i+1;
        }
    }

    cout<<"Lowest Consumption Month: "<<month;
    cout<<" ("<<min<<" Units)"<<endl;

    return month;
}

int average(Customer c)
{
    return annualUnits(c)/12;
}

int bill(Customer c)
{
    return annualUnits(c)*25;
}

int display(Customer c[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\n==================================="<<endl;
        cout<<"\nCustomer ID: "<<c[i].id<<endl;
        cout<<"\nCustomer Name: "<<c[i].name<<endl;
        cout<<"\nAnnual Units: "<<annualUnits(c[i])<<endl;

        highestMonth(c[i]);
        lowestMonth(c[i]);

        cout<<"\nAverage Monthly Units: "<<average(c[i])<<endl;
        cout<<"\nElectricity Bill: Rs. "<<bill(c[i])<<endl;
    }

    return 0;
}

int main()
{
    int n;

    cout<<"Enter Number of Customers: ";
    cin>>n;

    Customer c[n];

    input(c,n);

    display(c,n);

    return 0;
}
