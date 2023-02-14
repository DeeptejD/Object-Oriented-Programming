#include <bits/stdc++.h>
using namespace std;

class num
{
    int n;

public:
    num() { n = 0; }
    num(int i) { n = i; }
    friend int operator++(num);
    friend int operator++(num, int);
    friend int operator--(num);
    friend int operator--(num, int);
};

// preincrement
int operator++(num a)
{
    return ++a.n;
}

// psotincrement
int operator++(num a, int)
{
    return a.n++;
}

int operator--(num a)
{
    return --a.n;
}

int operator--(num a, int)
{
    return a.n--;
}

int main(int argc, char const *argv[])
{
    num n(10);
    cout << "Preincrement n: " << ++n << endl;
    cout << "Postincrement n: " << n++ << endl;
    cout << "Predecrement n: " << --n << endl;
    cout << "Postdecrement n: " << n-- << endl;
    return 0;
}