#include<iostream>
using namespace std;

class Vector{
    int size;
    int v[size];
    public:
    friend istream &operator>>(istream &, Vector &);
    Vector();
    Vector(int);
    ~Vector();


};

istream &operator>>(istream &input, Vector &v)
{
    for(int i=0;i<size;i++)
        input>>v[i];
}

Vector::Vector(int size)
{
    this->size=size;
    for(int i=0;i<size;i++)
        v[i]=0;
}

int main()
{
    cout<<"Enter the size: ";
    cin>>size;

    return 0;
}