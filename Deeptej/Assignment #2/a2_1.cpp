#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
    public:
    friend void add(class Complex & c1, class Complex & c2, class Complex & c3); 
    friend void display(class Complex c1, class Complex c2, class Complex c3); 
    void input(){
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>imag;
    }
};

void display(class Complex c1, class Complex c2, class Complex c3){
    printf("(%d + %di) + (%d + %di) = %d + %di\n", c1.real, c1.imag, c2.real, c2.imag, c3.real, c3.imag);
}

void add(class Complex & c1, class Complex  & c2, class Complex  & c3){
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
}

int main()
{
    class Complex c1, c2, c3;
    c1.input();
    c2.input();
    add(c1, c2, c3);
    display(c1, c2, c3);
}