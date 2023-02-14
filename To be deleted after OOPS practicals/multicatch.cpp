#include <bits/stdc++.h>
using namespace std;

void multicatch(int x)
{
    try
    {
        if (x == 1)
            throw x; // int exception
        else if (x == 2)
            throw 'x'; // char exception
        else
            throw(float(x)); // float exception
    }
    catch (int)
    {
        cout << "caught an int exception\n";
    }
    catch (char)
    {
        cout << "Caught a char exception\n";
    }
    catch (float)
    {
        cout << "Caught a floating exception\n";
    }
}

int main(int argc, char const *argv[])
{
    multicatch(1), multicatch(2), multicatch(4);
    return 0;
}