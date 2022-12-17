#include <iostream>
#include <fstream>
#include <string.h>
#define MAX 100
using namespace std;

int main(int argc, char const *argv[])
{
    // taking string input
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    ofstream fout("file1.txt", ios::out);
    for (int i = 0; i < str.length(); i++)
        fout.put(str[i]);
    fout.close();
    ifstream fin("file1.txt", ios::in);
    cout << "Contents of the file are\n";
    while (fin.eof() == 0)
    {
        char c = fin.get();
        cout << c;
    }
    fin.close();

    // copying to a new file
    fout.open("file2.txt");
    fin.open("file1.txt");
    cout << "\nContents of the second file are\n";
    while (fin.eof() == 0)
    {
        char c = fin.get();
        if (c == ' ')
        {
            char next;
            fout.put(c);
            while (c == ' ')
            {
                c = fin.get();
                next = c;
            }
            fout.put(next);
        }
        else
        {
            fout.put(c);
        }
    }
    fin.close();
    fout.close();
    cout<<"Contents of the new file are\n";
    fin.open("file2.txt");
        while (fin.eof() == 0)
    {
        char c = fin.get();
        cout << c;
    }
}
