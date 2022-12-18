#include <iostream>
using namespace std;
class base
{
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};
class d1 : public base
{
    int x;

public:
    void getdata()
    {
        cout << "\nenter value of x : ";
        cin >> x;
    }
    void display()
    {
        cout << "x: " << x;
    }
};
class d2 : public base
{
    int y;

public:
    void getdata()
    {
        cout << "\nEnter value of Y : ";
        cin >> y;
    }
    void display()
    {
        cout << "y: " << y;
    }
};
int main()
{
    d1 m;
    d2 d;
    base *p;
    p = &m;
    p->getdata();
    p->display();
    p = &d;
    p->getdata();
    p->display();
}