#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ifstream file("directory.txt");

    unordered_map<string, string> directory;

    string name, phone;
    while (file >> name >> phone)

        directory[name] = phone;

    file.close();
    int choice;

    do
    {
        cout << "phone Book Menu\n1. find num\n2. find name\n3. Update" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter number: ";
            cin >> name;

            if (directory.count(name) > 0)
            {
                cout << "phone number: " << directory[name] << endl;
            }
            else
            {
                cout << name << "not found\n"
                     << endl;
            }
            break;
        case 2:
        {

            cout << "Enter the phone number:\n";
            cin >> phone;

            bool found = false;
            for (const auto &entry : directory)
            {
                if (entry.second == phone)
                {
                    cout << "Name: " << entry.first << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "not found\n"
                     << endl;
            }
        }
        break;
        case 3:
        {

            cout << "Enter the name: ";
            cin >> name;

            if (directory.count(name) > 0)
            {
                cout << "Enter new phone number: ";
                cin >> phone;
                directory[name] = phone;
            }
            else
            {
                cout << "not found\n"
                     << endl;
            }
        }
        default:
            cout << "Invalid\n";
        }
    } while (choice);

    return 0;
}