#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Customer
{
    char name[50];
    int units;
    float charge;

public:
    friend void bill(class Customer);
    void getdata();
    friend void disp(class Customer);
    void bill()
    {
        charge = 50;
        for (int i = 1; i <= units; i++)
        {
            if (i <= 100)
            {
                charge += 0.6;
            }
            else if (i <= 300 && i >= 100)
            {
                charge += 0.8;
            }
            if (i > 300)
            {
                charge += 0.9;
            }
        }
        if (charge > 300)
        {
            charge += charge * 1.15;
        }
        cout << name << endl;
        cout << "Bill: " << charge << endl;
    }
};

void Customer::getdata()
{
    cout << "ENter name: ";
    cin >> name;
    cout << "Enter units consumed: ";
    cin >> units;
}

void disp(class Customer c)
{
    cout << "Units consumed: " << c.units << endl;
    cout << "Bill: " << c.charge << " Rs\n";
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "How many users: " << endl;
    cin >> n;
    class Customer c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].getdata();
    }
    cout << "Bills\n";
    for (int i = 0; i < n; i++)
    {
        c[i].bill();
    }
    return 0;
}
