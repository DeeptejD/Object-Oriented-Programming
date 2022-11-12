#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};

void B::get_ab()
{
    a = 5, b = 10;
}

int B::get_a()
{
    return a;
}

void B::show_a()
{
    cout << "a: " << a << endl;
}

class D : private B // private keyword
{

    // inherited
    // private:
    //     int b;
    //     void get_ab();
    //     int get_a();
    //     void show_a();
    int c;

public:
    void mul();
    void display();
};

void D::mul()
{
    get_ab();
    c = b * get_a(); // we are accessing private member a of the base class using a public member function of the base class
}

void D::display()
{
    cout << "a: " << get_a() << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}
int main()
{
    D d;
    d.mul();
    d.display();
}