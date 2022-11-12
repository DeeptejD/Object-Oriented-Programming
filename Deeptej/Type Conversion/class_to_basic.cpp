// We use overloaded casting operators
// overloaded casting operators are also known as Conversion Functions

#include <iostream>
#include <math.h>
using namespace std;

class Vector
{
    int size;
    int *v;

public:
    Vector() {}
    Vector(int num)
    {
        size = num;
        this->v = new int[size];
    }
    friend void operator>>(istream &, Vector &);
    operator double();
};

void operator>>(istream &in, Vector &v)
{
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < v.size; i++)
        cin >> v.v[i];
}

Vector::operator double()
{
    // Magnitude of a vector is the sqrt of the sum of its squares
    double mag = 0;
    for (int i = 0; i < size; i++)
        mag += v[i] * v[i];
    return sqrt(mag);
}

int main()
{
    int n;
    cin >> n;
    Vector V(n);
    cin >> V;
    double magnitude = V;
    cout << magnitude << endl;
    return 0;
}