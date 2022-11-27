#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display() { cout << "Base class display\n"; }
    void display2() { cout << "Second display of base class\n"; }
};

class Derived : public Base
{
public:
    void display() { cout << "Derived class display\n"; }
    void display2() { cout << "Second Derived class display\n"; }
};

int main(int argc, char const *argv[])
{
    Base b, *bptr = &b;
    bptr->display();
    bptr->display2();
    Derived d;
    bptr = &d;
    bptr->display();
    bptr->display2();
    return 0;
}
