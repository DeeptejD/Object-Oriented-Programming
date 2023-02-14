#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int main(int argc, char const *argv[])
{
    char str1[MAX], str2[MAX];
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;
    // displaying string 1 using write
    int m = strlen(str1), n = strlen(str2);
    for (int i = 1; i < m; i++)
    {
        cout.write(str1, i);
        cout << endl;
    }
    for (int j = m; j >= 0; j--)
    {
        cout.write(str1, j);
        cout << endl;
    }
    // concatenating strings using write
    cout.write(str1, strlen(str1)).write(str2, strlen(str2));
    return 0;
}
