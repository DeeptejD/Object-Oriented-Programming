#include <bits/stdc++.h>
using namespace std;

class vect
{
    int len;
    int *v;

public:
    vect() { len = 0, v = NULL; }
    vect(int i)
    {
        len = i;
        v = new int[i];
    }
    vect(int *i)
    {
        len = sizeof(i) / sizeof(int); // finds the length
        v = new int[len];              // dynamic allocation
    }
    friend ostream &operator<<(ostream &, vect &);
    friend istream &operator>>(istream &, vect &);
    friend vect operator*(int, vect);
    vect operator+(vect v)
    {
        vect temp(len);
        for (int i = 0; i < len; i++)
        {
            temp.v[i] = this->v[i] + v.v[i];
        }
        return temp;
    }
};

ostream &operator<<(ostream &out, vect &v)
{
    cout << "[ ";
    for (int i = 0; i < v.len; i++)
        cout << v.v[i] << ", ";
    cout << " ]";
}

istream &operator>>(istream &in, vect &v)
{
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < v.len; i++)
        cin >> v.v[i];
}

vect operator*(int num, vect v)
{
    for (int i = 0; i < v.len; i++)
        v.v[i] *= num;
    return v;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    vect v1(size), v2(size), v3;
    cin >> v1;
    cin >> v2;
    cout << "Vector 1: " << v1 << endl
         << "Vector 2: " << v2 << endl;
    v3 = v1 + v2;
    v1 = 5 * v1;
    v2 = 5 * v2;
    cout << "The sum of vectors is: " << v3 << endl;
    cout << "5 * v1 = ";
    cout << v1 << endl;
    cout << "5 * v2 = " << v2 << endl;
    return 0;
}