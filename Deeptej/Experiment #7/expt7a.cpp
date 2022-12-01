// *************************************************************************************
// Write a C++ program to print the following output using ios class member functions(fig -
// expt4A)
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
    cout.setf(ios::left, ios::adjustfield);
    Num o1(10), o2(20);
    cout.width(10);
    cout << "NUMBER", cout.width(15), cout << "PREINCREMENT", cout.width(15), cout << "POSTINCREMENT";
    cout.width(15), cout << "PREDECREMENT", cout.width(15), cout << "POSTDECREMENT" << endl;
    cout.width(10), cout << o1.val(), cout.width(15), cout << ++o1, cout.width(15), cout << o1++;
    cout.width(15), cout << --o1, cout.width(15), cout << o1-- << endl;
    cout.width(10), cout << o2.val(), cout.width(15), cout << ++o2, cout.width(15), cout << o2++;
    cout.width(15), cout << --o2, cout.width(15), cout << o2-- << endl;
    return 0;
}