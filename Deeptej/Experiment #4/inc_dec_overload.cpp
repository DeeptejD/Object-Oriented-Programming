// *************************************************************************************
// Write a C++ program to understand overloading of unary prefix & postfix operators to
// perform increment and decrement operations on objects.
// *************************************************************************************

#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num() { n = 0; };
    Num(int i) { n = i; };
    ~Num(){};

    int operator++() { return ++n; }
    int operator++(int) { return n++; }
    int operator--() { return --n; }
    int operator--(int) { return n--; }

    int val()
    {
        return n;
    }
};

int main()
{
    Num o1(10);
    cout << "The value of n is: " << o1.val() << endl;
    cout << "Preincrement n: " << ++o1 << endl;
    cout << "Postincrement n: " << o1++ << endl;
    cout << "Predecrement n: " << --o1 << endl;
    cout << "Postdecrement n: " << o1-- << endl;

    return 0;
}