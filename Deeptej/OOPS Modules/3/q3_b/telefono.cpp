#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class tel_directory
{
    string name;
    int number;

public:
    tel_directory() {}
    tel_directory(string name, int number)
    {
        this->name = name, this->number = number;
    }
    void get_contact()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter number: ";
        cin >> number;
        getchar();
    }
    void show_contact()
    {
        cout << "Name: " << name << endl
             << "Number: " << number << endl;
    }
    void clear_contact()
    {
        name = "";
        number = 0;
    }
    int isnamee(string name)
    {
        return (this->name == name);
    }
    int isnum(int number)
    {
        return (this->number == number);
    }
};

void find_from_name(string name)
{
    tel_directory contact;
    ifstream filein("contacts.txt");
    while (filein)
    {
        filein.read((char *)&contact, sizeof(contact));
        if (contact.isnamee(name))
        {
            contact.show_contact();
            return;
        }
    }
    cout << name << " not present\n";
}

void find_from_num(int num)
{
    tel_directory contact;
    ifstream filein("contacts.txt");
    while (filein)
    {
        filein.read((char *)&contact, sizeof(contact));
        if (contact.isnum(num))
        {
            contact.show_contact();
            return;
        }
    }
    cout << num << " not present\n";
}

void display()
{
    tel_directory contacts;
    ifstream filein("contacts.txt");
    cout << "Contacts\n";
    while (filein.eof()==0)
    {
        filein.read((char *)&contacts, sizeof(contacts));
        contacts.show_contact();
        printf("\n");
    }
}

void update_phone(string name)
{
    int loc = 0;
    tel_directory contacts;
    ifstream filein("contacts.txt");
    while (filein)
    {
        filein.read((char *)&contacts, sizeof(contacts));
        if (contacts.isnamee(name))
        {
            filein.close();
            loc *= sizeof(contacts);
            ofstream fout("contacts.txt", ios::app);
            fout.seekp(0, ios::beg);
            fout.seekp(loc);
            contacts.get_contact();
            fout.write((char *)&contacts, sizeof(contacts)) << flush;
            cout << "Contact successfully updated\n";
            fout.close();
            return;
        }
        else
            loc++;
    }
    cout << "Contact not present\n";
}

int main(int argc, char const *argv[])
{
    // tel_directory contacts[] = {{"Steve", 8767}, {"Andrew", 2345}, {"Raye", 3467}, {"Ashley", 9999}};
    ofstream file("contacts.txt");
    // int n = sizeof(contacts) / sizeof(contacts[0]);
    int n;
    cout << "Enter the number of contacts: ";
    cin >> n;
    getchar();
    tel_directory contacts[n];
    for (int i = 0; i < n; i++)
    {
        contacts[i].get_contact();
        file.write((char *)&contacts[i], sizeof(contacts[i]));
    }
    file.close();

    while (1)
    {
        cout << "Select an option\n1. Display Contacts\n2. Find from name\n3. Find from num\n4. Update phone number\n5. Exit\n";
        int choice, num;
        string name;
        cin >> choice;
        getchar();
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            getchar();
            cout << "Enter name to be searched: ";
            getline(cin, name);
            find_from_name(name);
            printf("\n");
            break;
        case 3:
            cout << "Enter number: ";
            cin >> num;
            find_from_num(num);
            printf("\n");
            break;
        case 4:
            cout << "Enter name of the cotact: ";
            getline(cin, name);
            update_phone(name);
            break;
        case 5:
            exit(1);
        default:
            cout << "Invalid option\n";
        }
    }

    return 0;
}
