// Write a C++ program to implement exceptional handling concept (Divide by zero) using
// exception rethrow mechanism
#include <iostream>
using namespace std;

void divide(float x, float y)
{
    try
    {
        if (y == 0.0)
            throw y;
        else
            cout << "Division: " << x / y << endl;
    }
    catch (float)
    {
        cout << "Exception caught in Division function\n";
        throw;
    }
}

int main(int argc, char const *argv[])
{
    try
    {
        divide(12.5, 10);
        divide(67, 0);
    }
    catch (float)
    {
        cout << "Exception caught in main\n";
    }

    return 0;
}
