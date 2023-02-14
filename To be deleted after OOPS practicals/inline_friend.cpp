#include <bits/stdc++.h>
using namespace std;

class book
{
    string name;
    float price;

public:
    void show() { cout << name << endl
                       << price << endl; }         // functions definede inside a class are inline by default
    friend istream &operator>>(istream &, book &); // friend function
};

inline int sum(int a, int b)
{
    return a + b;
}

istream &operator>>(istream &input, book &b)
{
    cout << "Enter title: ";
    cin >> b.name;
    cout << "Enter price: ";
    cin >> b.price;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    book bk;
    cin >> bk;
    bk.show();
    return 0;
}