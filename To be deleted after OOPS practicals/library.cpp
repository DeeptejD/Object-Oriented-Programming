#include <bits/stdc++.h>
using namespace std;

int count = 0, acc = 10'000;

class book
{
    string name, auth, month;
    float price;
    int day, year;
    int acnum;
    bool flag;

public:
    void getbk()
    {
        ::count++;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter auth: ";
        cin >> auth;
        cout << "Enter price: ";
        cin >> price;
        acc += 5;
        acnum = acc;
        cout << "Enter 1 if the book has been taken or 0 otherwise: ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            flag = true;
            cout << "Enter day: ";
            cin >> day;
            cout << "Enter month: ";
            cin >> month;
            cout << "Enter year: ";
            cin >> year;
        }
        else
        {
            flag = false;
            day = 00, month = "none", year = 0000;
        }
    }
    void showbk()
    {
        cout << "Name: " << name << endl
             << "Author: " << auth << endl
             << "Price: " << price << endl;
        if (flag)
        {
            cout << "Date of accession\n"
                 << day << "/" << month << "/" << year << endl;
        }
        else
            cout << "The book has not been accessed\n";
    }
    string gettitle()
    {
        return name;
    }
};

int main(int argc, char const *argv[])
{
    int max;
    cout << "Enter the capacity of the library: ";
    cin >> max;
    book lib[max];
    cout << "Select one of the options\n";
    string tit;
    int found = 0, index;
    while (1)
    {
        cout << "1. Enter a new book\n"
             << "2. Search" << endl
             << "3. display" << endl
             << "4. count" << endl
             << "5. quit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            if (::count >= max)
                cout << "The library has reached its max capacity\n";
            else
                lib[::count].getbk();
        }
        break;
        case 2:
        {
            cout << "Enter the name of the book to be searched: ";
            cin >> tit;
            for (int i = 0; i <= ::count; i++)
            {
                if (lib[i].gettitle() == tit)
                {
                    found = 1;
                    index = i;
                    break;
                }
            }
            if (found == 1)
                lib[index].showbk();
            else
                cout << "Book not found\n";
            break;
        }
        case 3:
        {
            for (int i = 0; i < ::count; i++)
            {
                lib[i].showbk();
                cout << endl;
            }
            break;
        }
        case 4:
        {
            cout << "The number of books in the library are: " << ::count << endl;
            break;
        }
        case 5:
        {
            cout << "Quitting...";
            exit(0);
        }
        default:
            cout << "You have entered an invalid option\n";
            break;
        }
    }
    return 0;
}