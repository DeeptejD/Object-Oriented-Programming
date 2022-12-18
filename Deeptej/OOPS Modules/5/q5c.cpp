#include "bits/stdc++.h"

using namespace std;
int main()
{
    string s;
    cout<<"Enter String\n";
    getline(cin,s);
    cout<<"Display using Iterator\n";
    for(string::iterator it = s.begin(); it != s.end() ; it++)
    {
        cout<<*it;
    }
}