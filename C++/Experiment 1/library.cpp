#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int accession = 10'000;
int count = 0;

class DateOfIssue
{

    int date;
    int month;
    int year;

public:
    void acceptDate()
    {
        cout << "Enter date: ";
        cin >> date;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    friend class Library;

    void printDate()
    {
        cout << date << "/" << month << "/" << year;
    }
};

class Library
{
    int accessionNumber;
    string title;
    string author;
    float price;
    int flag;
    class DateOfIssue date;

public:
    int isPresent()
    {
        if (flag)
            return 1;
        return 0;
    }

    void acceptDetails()
    {
        accessionNumber = accession;
        accession += 5;
        getchar();
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter 1 if book is taken, 0 if not: ";
        cin >> flag;
        if (isPresent())
            date.acceptDate();
        count++;
    }

    void printDetails()
    {
        cout << "\nAccession number: " << accessionNumber << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        if (isPresent())
            cout << "The books is taken\n";
        else
            cout << "The book has not been taken\n";
    }

    int search(string search)
    {
        if (title == search)
            return 1;
        return 0;
    }

    int Delete(string dtitle)
    {
        if (title == dtitle)
            return 1;
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    class Library lib[50];

    printf("===========\nLibrary\n===========\n");
    while (1)
    {
        cout << "Enter the number corresponding to the choice of operation\n";
        cout << "1.Add\n2.Display\n3.Search\n4.Delete\n5.Count\n6.Exit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (count == 50)
            {
                cout << "Library full!\n";
                break;
            }
            lib[count].acceptDetails();
            break;

        case 2:
            for (int i = 0; i < count; i++)
            {
                lib[i].printDetails();
            }
            break;
        case 3:
        {
            string search;
            getchar();
            cout << "Enter title to be searched: ";
            getline(cin, search);
            for (int i = 0; i < count; i++)
            {
                if (lib[i].search(search))
                {
                    lib[i].printDetails();
                    break;
                }
            }
        }
        break;
        case 4:
        {
            cout << "Enter the title to be deleted: ";
            getchar();
            string tbd;
            getline(cin, tbd);
            for (int i = 0; i < count; i++)
            {
                if (lib[i].Delete(tbd))
                {
                    for (int j = i; j < count; j++)
                    {
                        lib[j] = lib[j + 1];
                    }
                    count--;
                }
            }
            cout << "Book not found\n";
        }
        break;

        case 5:
            cout << "Number of books: " << count << endl;
            break;

        case 6:
            exit(1);

        default:
            cout << "Invalid choice\n";
            break;
        }
    }
}
