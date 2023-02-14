#include <bits/stdc++.h>
using namespace std;

class temp
{
public:
    int num;

    temp(int num) { this->num = num; }
    temp *operator->(void)
    {
        return this;
    }
};

int main(int argc, char const *argv[])
{
    temp a(10);
    temp *aptr = &a;
    cout << a.num << endl
         << aptr->num << endl
         << a->num << endl;
    return 0;
}