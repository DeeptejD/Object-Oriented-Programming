#include <bits/stdc++.h>
using namespace std;

int cat(int a, int b)
{
    return (a + b);
}

string cat(string a, string b)
{
    return (a + b);
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << cat(a, b) << endl; // calls the cat function w int as parameters
    string s1, s2;
    cin >> s1 >> s2;
    cout << cat(s1, s2) << endl; // calls the cat functions with strings as parameters
    return 0;
}