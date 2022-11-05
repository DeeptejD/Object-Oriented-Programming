// *************************************************************************************
// Write a C++ program using class string to create two strings and perform the following
// operations on the strings
// i. To add two string type objects (s1 = s2 + s3) where s1,s2,s3 are objects
// ii. To compare two string lengths to print which string is smaller & print accordingly
// *************************************************************************************

#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

class String
{
    int len; // length of the string
    char *p; // points to the start of the string
public:
    String()
    {
        len = 0;
        p = NULL;
    }
    friend String operator+(String &, String &);
    friend int operator<=(String &, String &);
    String(char *p);
    String(String &s);
    ~String() { delete p; }
    friend ostream &operator<<(ostream &output, String);
    void display();
};

void String::display()
{
    for (int i = 0; i < len; i++)
        cout << p[i];
    cout << endl;
}

// ostream &operator<<(ostream &output, String s)
// {
//     if (s.p == NULL)
//     {
//         printf("Attempted to print a NULL string\n");
//         return output;
//     }
//     for (int i = 0; i < s.len; i++)
//         cout << s.p[i];
//     cout << endl;
// }

String::String(char *p)
{
    len = strlen(p);
    p = new char[len + 1];
    strcpy(this->p, p);
}

String::String(String &s)
{
    len = s.len;
    p = new char[len + 1];
    strcpy(p, s.p);
}

String operator+(String &a, String &b)
{
    String temp;
    temp.len = a.len + b.len;
    temp.p = new char[a.len + b.len + 1];
    strcpy(temp.p, a.p);
    strcat(temp.p, b.p);
    // temp.p[temp.len] = '\0';
    return (temp);
}

int operator <= (String &a, String &b)
{
    int m = strlen(a.p), n = strlen(b.p);
    return (m <= n);
}

char a[MAX], b[MAX];
int main(int argc, char const *argv[])
{
    cout << "Enter String 1: ";
    gets(a);
    cout << "Enter String 2: ";
    gets(b);
    cout << "beg\n";
    String s1(a), s2(b), s3;
    s3 = s1 + s2;
    cout << "Here";
    s3.display();
    if (s1 <= s2)
        s1.display();
    else
        s2.display();
    cout << "End\n";
    return 0;
}
