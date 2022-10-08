#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int accession = 10'000, count = 0, n;
class Library *p;

class Library
{
    int acnum;
    string title;
    string author;
    float price;

public:
    void getinfo()
    {
        cout << "------------------------" << endl;
        acnum = accession + 50;
        cout << "Enter title: ";
        getchar();
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
        cout << "------------------------" << endl;
    }
    void display()
    {
        cout << "------------------------" << endl;
        cout << "Accession number: " << acnum << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
    int search(string stitle)
    {
        if (stitle == title)
            return 1;
        return 0;
    }
};

// void Delete()
// {
//     string dtitle;
//     getchar();
//     cout << "Enter title of book to Delete: ";
//     getline(cin, dtitle);
//     for (int i = 0; i < n; i++)
//     {
//         if (p[i].search(dtitle))
//         {
//             cout << "Book found!" << endl;
//             p[i].display();
//             for (int j = i; j < n; j++)
//             {
//                 p[j] = p[j + 1];
//             }
//             count--;
//             break;
//         }
//     }
// }

int main(int argc, char const *argv[])
{
    printf("Enter number of books: ");
    cin >> n;
    p = new class Library[n];
    for (int i = 0; i < n; i++)
    {
        p[i].getinfo();
        count++;
    }
    while (1)
    {
        int choice;
        cout << "1. Display all books\n2. Search for a book\n3. Display count\n4. Delete all the books\n5. Add new entries\n6. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i < n; i++)
            {
                p[i].display();
            }
            break;
        }
        case 2:
        {
            string stitle;
            getchar();
            cout << "Enter title of book to search: ";
            getline(cin, stitle);
            for (int i = 0; i < n; i++)
            {
                if (p[i].search(stitle))
                {
                    cout << "Book found!" << endl;
                    p[i].display();
                    break;
                }
            }
            break;
        }
        case 3:
            cout << "------------------------" << endl;
            cout << "Number of books: " << count << endl;
            cout << "------------------------" << endl;
            break;
        case 4:
            delete[] p;
            break;
        case 5:
            printf("Enter number of books: ");
            cin >> n;
            p = new class Library[n];
            for (int i = 0; i < n; i++)
            {
                p[i].getinfo();
                count++;
            }
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid input\n";
        }
    }
    return 0;
}
