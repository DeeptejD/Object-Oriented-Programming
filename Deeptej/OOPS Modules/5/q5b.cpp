#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cout<<"Enter a String of len 10\n";
    cin>>s;
    cout<<"Slicing (1-5)\n"<<s.substr(1,5)<<"\n";
    cout<<"Searching\n"<<s.find('a')<<"\n";
    cout<<"Capacity\n"<<s.capacity()<<"\n";
    string str = "abcde";
    cout<<s.insert(6,str)<<"\n";
}