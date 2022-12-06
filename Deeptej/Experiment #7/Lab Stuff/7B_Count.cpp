#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int ch = 0, words = 0, lines = 0;
    char c;
    cout<<"ENTER: ";
    do
    {
        c = cin.get();
        ch++;
        if (c == ' ' || c == '.')
            words++;
        if (c == '.')
        {
            lines++;
            c=cin.get();
        }
    } while (c != '\n');
    
    cout << setw(10) << "Characters" << setw(10) << "Words" << setw(10) << "Lines" << endl;
    cout << setw(10) << ch << setw(10) << words << setw(10) << lines << endl;

    return 0;
}
