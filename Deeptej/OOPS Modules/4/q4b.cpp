// Write a C++ program to implement a function template to swap two elements
#include <iostream>
using namespace std;

template <class T>
void display(T x, T y)
{
    cout << "x: " << x << " y:" << y << endl;
}

template <class T>
void swap_terms(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
    display(x, y);
}

int main(int argc, char const *argv[])
{
    int x, y;
    cout << "Enter integers x, y: ";
    cin >> x >> y;
    display(x, y);
    swap_terms(x, y);
    char a, b;
    cout << "Enter characters a, b: ";
    cin >> a >> b;
    display(a, b);
    swap_terms(a, b);
}
