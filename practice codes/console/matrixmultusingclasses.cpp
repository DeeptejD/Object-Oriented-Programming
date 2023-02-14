#include <bits/stdc++.h>
using namespace std;

class matrix
{
    int **mat;
    int r, c;

public:
    matrix() {}
    matrix(int r, int c)
    {
        this->r = r, this->c = c;
        mat = new int *[r];
        for (int i = 0; i < r; i++)
            mat[i] = new int[c];
    }
    friend istream &operator>>(istream &, matrix);
    friend ostream &operator<<(ostream &, matrix);
    
};

ostream &operator<<(ostream &out, matrix m)
{
    cout << "The matrix is\n";
    for (int i = 0; i < m.r; i++)
    {
        for (int j = 0; j < m.c; j++)
        {
            cout << m.mat[i][j] << " ";
        }
        cout << endl;
    }
}

istream &operator>>(istream &in, matrix m)
{
    cout << "Enter the elements of matrix\n";
    for (int i = 0; i < m.r; i++)
        for (int j = 0; j < m.c; j++)
            cin >> m.mat[i][j];
}

int main()
{
    matrix m(3, 3);
    cin >> m;
    cout << m;
}