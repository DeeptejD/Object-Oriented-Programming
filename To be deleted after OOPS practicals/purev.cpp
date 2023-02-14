#include <bits/stdc++.h>
using namespace std;

class base // abstract base class
{
public:
    virtual void display() = 0; // pure virtual function
};

class derived : public base
{
public:
    void display()
    {
        cout << "This is the display function. It has been redefined in the derived class.\n";
    }
};

int main(int argc, char const *argv[])
{
    derived d;
    d.display();
    return 0;
}