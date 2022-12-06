// Write a C++ program to create a class template to represent a generic vector.Include the
// member functions to perform the following tasks 1. Create the vector 2. To modify the value of a given
// element 3. To display the vector elements
#include <iostream>
using namespace std;

template <class T>
class Vector
{
    T *ptr;
    int size;

public:
    Vector() { size = 0; }
    Vector(int size)
    {
        this->size = size;
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element: ";
            cin >> ptr[i];
        }
    }
    void modify(T x)
    {
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
