// *************************************************************************************
// Write a C++ program to overload binary stream insertion (<<) & extraction (>>) 
// operators when used with objects.
// *************************************************************************************

#include <iostream>
using namespace std;

class distance
{
    int ft;
    int in;

public:
    distance() { ft = 0, in = 0; }
    distance(int ft, int in)
    {
        this->ft = ft;
        this->in = in;
    }
    friend ostream &operator<<(ostream &, distance &);
    friend istream &operator>>(istream &, distance &);
};

ostream &operator<<(ostream &output, class distance &d) { output << "ft: " << d.ft << " in: " << d.in << endl; }

istream &operator>>(istream &input, class distance &d) { input >> d.ft >> d.in; }

int main()
{
    class distance d1;
    cout<<"Enter space separated ft and in\n";
    cin>>d1;
    cout<<d1;
    return 0;
}