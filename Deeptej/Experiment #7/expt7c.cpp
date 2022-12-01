#include <iostream>
#include <iomanip>
#include<string.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex() {}
    Complex(int real, int imaginary)
    {
        this->real = real, this->imaginary = imaginary;
    }
    friend ostream &operator<<(ostream &, Complex &);
    friend istream &operator>>(istream &, Complex &);
};

istream &operator>>(istream &input, Complex &c)
{
    setiosflags(ios::left);
    cout << setw(27) << "Enter the real part: ";
    cin >> c.real;
    cout << setw(27) << "Enter the imaginary part: ";
    cin >> c.imaginary;
}

ostream &operator<<(ostream &output, Complex &c)
{
    setiosflags(ios::left);
    string num;
    strcat(n, c.real);
    cout << setw(15) << "COMPLEX NO." << setw(15) << "REAL" << setw(15) << "IMAGINARY" << endl;
    cout << setw(15) << num << setw(15) << c.real << setw(15) << c.imaginary << endl;
}

int main()
{
    Complex c;
    cin >> c;
    cout << c;
    return 0;
}