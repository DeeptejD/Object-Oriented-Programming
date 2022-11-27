#include <iostream>
using namespace std;

class Abstract
{
public:
    void fun1() { cout << "This is fun1() from the bas class" << endl; }
    virtual void display() = 0;
};

class Derived : public Abstract
{
public:
    void display() { cout << "Defined display in derived class\n"; }
};

int main(int argc, char const *argv[])
{
    Derived d;
    d.display();
    d.fun1();
    return 0;
}
