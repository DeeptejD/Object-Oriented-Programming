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
    void modify()
    {
        T x, y;
        cout << "Enter the element to modify: ";
        cin >> x;
        cout << "Enter new element: ";
        cin >> y;
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == x)
            {
                ptr[i] = y;
                cout << "Element succesfully modified\n";
                return;
            }
        }
        cout << "Element not present in the vector\n";
    }
    void display()
    {
        cout << "[ ";
        for (int i = 0; i < size; i++)
            cout << ptr[i] << ", ";
        cout << "]\n";
    }
};

void intvector()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    Vector<int> v1(n);
    v1.display();
    v1.modify();
    v1.display();
}

void charvector()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    Vector<char> v1(n);
    v1.display();
    v1.modify();
    v1.display();
}

void flvector()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    Vector<float> v1(n);
    v1.display();
    v1.modify();
    v1.display();
}

int main(int argc, char const *argv[])
{
    int choice;
    while (1)
    {
        cout << "Enter choice\n1. int Vector\n2. char Vector\n3. float Vector\n4. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            intvector();
            break;
        case 2:
            charvector();
            break;
        case 3:
            flvector();
            break;
        case 4:
            exit(1);
        }
    }

    return 0;
}
