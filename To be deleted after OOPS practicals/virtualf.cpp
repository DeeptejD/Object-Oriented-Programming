#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "This is the base class function\n";
    }
    void show2()
    {
        cout << "This is the second function from base class\n";
    }
};

class derived : public base
{
public:
    void show()
    {
        cout << "This the the derived class function\n";
    }
    void show2()
    {
        cout << "This is the second function from the derived class\n";
    }
};

int main(int argc, char const *argv[])
{
    derived d;
    base b;
    base *bptr = &b;
    bptr->show();
    bptr->show2();
    bptr = &d;
    bptr->show();
    bptr->show2();

    return 0;
}