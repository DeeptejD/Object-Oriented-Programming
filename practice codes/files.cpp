#include <bits/stdc++.h>

using namespace std;

class student
{
    string name, roll, address, branch;

public:
    void getdetails()
    {
        cout << "Enter name: ";
        cin >> name;
        printf("Enter roll: ");
        cin >> roll;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter branch: ";
        cin >> branch;
    }
    void showdetails()
    {
        cout << name << endl
             << roll << endl
             << address << endl
             << branch << endl;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getdetails();
        ofstream outfile;
        outfile.open(s[i].getname());
        outfile.write((char *)&s[i], sizeof(s[i]));
        outfile.close();
        ifstream infile(s[i].getname());
        student temp;
        infile.read((char *)&temp, sizeof(temp));
        temp.showdetails();
    }
}