#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << "a: " << a << endl
         << "b: " << b;
    return 0;
}