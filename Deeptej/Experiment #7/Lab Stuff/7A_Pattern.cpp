#include <iostream>
#include <string.h>

using namespace std;



void secondhalf(char *str, string s, int len)
{
    for (int j = 2; j <= len; j++)
    {
        cout.fill(' ');
        cout.width(len);
        cout.write(str, j);
        cout.width(len - j);
        cout << "";
        cout.width(len - j);
        cout << "";
        cout << s.substr(len - j, len);
        cout << endl;
    }
}

void print_pattern(char *str)
{
    int len = strlen(str);
    char rev[len];
    strcpy(rev, str);
    int i=0, j=len-1;
    while(i<j)
    {
        swap(rev[i], rev[j]);
        i++, j--;
    }
    string s = "";
    for (int i = 0; i < len; i++)
        s = s + rev[i];
    for (int i = len; i > 0; i--)
    {
        if (i == 1)
            cout.fill('*');
        else
            cout.fill(' ');
        cout.width(len);
        cout.write(str, i);
        cout.width(len - i);
        cout << "";
        cout.width(len - i);
        cout << "";
        cout << s.substr(len - i, len);
        cout << endl;
    }
    secondhalf(str, s, len);
}

int main(int argc, char const *argv[])
{
    char str[50];
    cout << "Enter string: ";
    cin >> str;
    print_pattern(str);
    return 0;
}
