#include <bits/stdc++.h>

using namespace std;

void print(char str[])
{
    int len = strlen(str);
    char rev[len];
    strcpy(rev, str);
    string s = "";
    int i = 0, j = len - 1;
    while (i < j)
    {
        swap(str[i], str[j]);
        i++, j--;
    }
    for (int i = 0; i < strlen(rev); i++)
    {
        s = s + rev[i];
    }
    for (int i = len; i > 0; i--)
    {
        if (i == 1)
            cout.fill('*');
        else
            cout.fill(' ');
        cout.write(str, i);
        cout.width(len - i);
        cout << "";
        cout.width(len - i);
        cout << "";
        cout << s.substr(len - i, len);
        cout << endl;
    }
    // second part;
    for (int i = 2; i <= len; i++)
    {
        cout.fill(' ');
        cout.write(str, i);
        cout.width(len - i);
        cout << "";
        cout.width(len - i);
        cout << "";
        cout << s.substr(len - i, len);
        cout << endl;
    }
}

int main()
{
    char str[50];
    cin >> str;
    print(str);
}