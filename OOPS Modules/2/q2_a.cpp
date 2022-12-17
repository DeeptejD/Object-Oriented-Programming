#include <bits/stdc++.h>
#define MAX 21
using namespace std;

class String
{
    char str[MAX];
    int len = strlen(str);

public:
    String() {}
    String(char *arr)
    {
        if (strlen(str) > 20)
            strncpy(str, arr, 20);
        else
            strcpy(str, arr);
    }
    ~String() { str[MAX] = {}; }
    friend String operator+(String s1, String s2);
    friend ostream &operator<<(ostream &, String &);
};

ostream &operator<<(ostream &out, String &s)
{
    out << s.str;
}

String operator+(String s1, String s2)
{
    char finstr[s1.len + s2.len + 1];
    strcpy(finstr, s1.str);
    strcat(finstr, s2.str);
    return finstr;
}

int main(int argc, char const *argv[])
{

    char *str1 = "Hello"; // overloaded assignment operator in the form of a parameterised constructor
    char *str2 = " World";
    String s1, s2, s3;
    s1 = str1, s2 = str2;
    cout << "The first string is: " << s1 << endl
         << "The second string is: " << s2 << endl;
    s3 = s1 + s2; // concatenate
    cout << "The concatenated string is: " << s3 << endl;
    return 0;
}
