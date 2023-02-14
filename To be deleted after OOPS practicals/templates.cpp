#include <bits/stdc++.h>
using namespace std;

template <class T>
class Vector
{
    int len;
    T *ptr;

public:
    Vector() { len = 0, ptr = NULL; }
    Vector(int len)
    {
        this->len = len;
        ptr = new T[len];
    }
    void getinput()
    {
        for (int i = 0; i < len; i++)
        {
            cin >> ptr[i];
        }
    }
    void showvect()
    {
        cout << "[ ";
        for (int i = 0; i < len; i++)
            cout << ptr[i] << ", ";
        cout << "]";
    }
};

int main(int argc, char const *argv[])
{
    Vector<int> v1(5);
    Vector<char> v2(5);
    Vector<float> v3(5);
    cout << "int vector\n";
    v1.getinput();
    v1.showvect();
    cout << "char vector\n";
    v2.getinput();
    v2.showvect();
    cout << "float vector\n";
    v3.getinput();
    v3.showvect();
    return 0;
}