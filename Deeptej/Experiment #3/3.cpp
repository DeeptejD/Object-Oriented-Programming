#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    complex() { real = 0, imag = 0; };
    complex(int, int);
    ~complex();
    complex(complex &c);
    void input();
    void display();
};

void complex::input()
{
    cout << "Enter the real part: ";
    cin >> real;
    cout << "Enter the imag part: ";
    cin >> imag;
}

void complex::display()
{
    cout << "The complex number is: " << real << "+" << imag << "i" << endl;
}

complex::complex(int r, int i)
{
    real = r;
    imag = i;
}

complex::complex(complex &c)
{
    real = c.real;
    imag = c.imag;
}

complex::~complex()
{
    cout << "Destructor executed\n";
}

int main(int argc, char const *argv[])
{
    complex c1(10, 20);
    cout<<"The first complex number is: ";
    c1.display();
    complex c2(c1);
    cout<<"The copied complex number is: ";
    c2.display();
    return 0;
}
