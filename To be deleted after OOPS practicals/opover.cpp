#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class String
{
    int len;
    char *str;

public:
    String() { len = 0, str = NULL; }
    String(char *p)
    {
        len = strlen(p), str = new char[len + 1];
        strcpy(str, p);
    }
    friend ostream &operator<<(ostream &, String);
    friend istream &operator>>(istream &, String);
    String operator+(String s)
    {
        String temp;
        temp.len = len + s.len;
        temp.str = new char[temp.len + 1];
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    int operator<(String s)
    {
        if (len < s.len)
            return 1;
        else if (len > s.len)
            return 2;
        return 3; // in case they are equal
    }
};

istream &operator>>(istream &in, String s)
{
    cout << "Enter the length: ";
    cin >> s.len;
    cout << "Enter the string: ";
    cin >> s.str;
}

ostream &operator<<(ostream &out, String s)
{
    out << s.str << endl;
}

int main(int argc, char const *argv[])
{
    char a[MAX], b[MAX];
    cin >> a >> b;
    String s1(a), s2(b), s3;
    s3 = s1 + s2;
    cout << s3 << endl;
    if (s1 < s2 == 1)
        cout << "s1 is less than s2";
    else if (s1 < s2 == 2)
        cout << "s1 is greater than s2";
    else
        cout << "the length of s1 and s2 is the same\n";
    return 0;
}