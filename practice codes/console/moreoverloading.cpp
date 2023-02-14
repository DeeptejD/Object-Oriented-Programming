#include <bits/stdc++.h>
using namespace std;

class num
{
    int arr[5];

public:
    num(int *n)
    {
        for (int i = 0; i < 5; i++)
            arr[i] = n[i];
    }
    int operator[](int k)
    {
        return arr[k];
    }
};

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    num A(arr);
    for (int i = 0; i < 5; i++)
        cout << A[i] << " ";
    return 0;
}