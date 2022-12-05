#include <iostream>
using namespace std;

void multicatch(int x)
{
    try
    {
        if (x == 1)
            throw x; // throwing int
        else if (x == 0)
            throw 'x'; // throwing char x
        else if (x == -1)
            throw(float(x));
    }
    catch (int)
    {
        cout << "Caught an int exception\n";
    }
    catch (char)
    {
        cout << "Caught a char exception\n";
    }
    catch (float)
    {
        cout << "Caught a float exception\n";
    }
}

int main(int argc, char const *argv[])
{
    multicatch(1), multicatch(0), multicatch(-1);
    return 0;
}
