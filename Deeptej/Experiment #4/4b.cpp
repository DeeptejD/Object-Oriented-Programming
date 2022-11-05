// *************************************************************************************
// Write a C++ program to understand overloading of binary operators to perform the 
// following operations on the objects of the class: 
// i. x = 5 + y 
// ii. x = x * y where x & y are objects of the class 
// iii. x = y - 5 
// *************************************************************************************

#include <iostream>
using namespace std;

class num
{
    int x;

public:
    num() { x = 0; }
    num(int n) { x = n; }
    friend num operator+(int, num);
    friend num operator*(num, num);
    friend num operator-(num, int);
    void display(void) { cout << "Value of the object is: " << x << endl; }
};

num operator+(int n, num ob) { return num(n + ob.x); }
num operator*(num ob1, num ob2) { return num(ob1.x * ob2.x); }
num operator-(num ob, int n) { return num(ob.x - n); }

int main()
{
    num x, y(10);
    x = 5 + y;
    x.display();
    x = x * y;
    x.display();
    x = y - 5;
    x.display();
    return 0;
}