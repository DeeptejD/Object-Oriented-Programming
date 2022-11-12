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

class D : public B
{

    // inherited
    // public: (visibility retained)
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
    D d;        // making an object of the derived class
    d.get_ab(); // calling public mem fun of base class
    d.mul();    // public mem of derived class
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}

// OUTPUT
// a: 5
// a: 5
// b: 10
// c: 50
// a: 5
// b: 20
// c: 100