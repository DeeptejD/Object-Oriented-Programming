#include <bits/stdc++.h>
using namespace std;

class directory
{
    string name, phone;

public:
    void getdetails()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter telephone: ";
        cin >> phone;
    }
    void showdetails()
    {
        cout << "Name: " << name << endl
             << "Telephone: " << phone << endl;
    }
    string getname()
    {
        return name;
    }
    string getphone()
    {
        return phone;
    }
};

int searchp()
{
    string phone;
    cout << "Enter the phone number fo the contact to be searched: ";
    cin >> phone;
    directory d;
    ifstream infile("directory");
    while (infile)
    {
        infile.read((char *)&d, sizeof(d));
        if (phone == d.getphone())
        {
            d.showdetails();
            return 1;
        }
    }
    infile.close();
    return 0;
}

int searchn()
{
    string name;
    cout << "Enter the phone number fo the contact to be searched: ";
    cin >> name;
    directory d;
    ifstream infile("directory");
    while (infile)
    {
        infile.read((char *)&d, sizeof(d));
        if (name == d.getname())
        {
            d.showdetails();
            return 1;
        }
    }
    infile.close();
    return 0;
}

int updaten(int num)
{
    string name;
    cout << "Enter the name: ";
    cin >> name;
    directory d[num];
    ifstream infile("directory");
    for (int i = 0; i < num; i++)
    {
        infile.read((char *)&d[i], sizeof(d[i]));
    }
    infile.close();
    for (int i = 0; i < num; i++)
    {
        if (name == d[i].getname())
        {
            d[i].getdetails();
            ofstream outfile;
            outfile.open("directory");
            for (int i = 0; i < num; i++)
                outfile.write((char *)&d[i], sizeof(d[i]));
            return 1;
        }
    }
    return 0;
}

int updatep(int num)
{
    string phone;
    cout << "Enter the number: ";
    cin >> phone;
    directory d[num];
    ifstream infile("directory");
    for (int i = 0; i < num; i++)
    {
        infile.read((char *)&d[i], sizeof(d[i]));
    }
    infile.close();
    for (int i = 0; i < num; i++)
    {
        if (phone == d[i].getphone())
        {
            d[i].getdetails();
            ofstream outfile;
            outfile.open("directory");
            for (int i = 0; i < num; i++)
                outfile.write((char *)&d[i], sizeof(d[i]));
            return 1;
        }
    }
    return 0;
}

void display()
{
    directory d;
    ifstream infile("directory");
    while (infile.read((char *)&d, sizeof(d)))
    {

        d.showdetails();
    }
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number of contacts: ";
    cin >> num;
    directory d[num];
    ofstream fout;
    fout.open("directory");
    for (int i = 0; i < num; i++)
    {
        d[i].getdetails();
        fout.write((char *)&d[i], sizeof(d[i]));
    }
    fout.close();
    while (1)
    {
        cout << "Enter choice\n1. Display Directory\n2. Search\n3. Update (based on name)\n4. Update (based on phone)\n5. Exit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            // for (int i = 0; i < num; i++)
            //     d[i].showdetails();
            display();
            break;
        }
        case 2:
        {
            cout << "1. Name based?\n2. Phone number based?\n";
            cin >> choice;
            if (choice == 1)
            {
                if (!searchn())
                    cout << "Phone number not present\n";
            }
            else
            {
                if (searchp() == 0)
                    cout << "Contact not present\n";
            }
            break;
        }
        case 3:
        {
            if (!updaten(num))
                cout << "Contact not present\n";
            else
                cout << "Contact succesfully updated!\n";
            break;
        }
        case 4:
        {
            if (!updatep(num))
                cout << "Contact not present\n";
            else
                cout << "Contact succesfully updated!\n";
            break;
        }
        case 5:
            exit(0);
        default:
        {
            cout << "Invalid option\n";
            break;
        }
        }
    }
    return 0;
}