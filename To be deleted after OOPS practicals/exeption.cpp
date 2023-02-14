#include <iostream>
using namespace std;

void div(float x, float y)
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
        cout << "Exception caught in Div functon: Division by zero\n";
        throw;
    }
}

int main(int argc, char const *argv[])
{
    try
    {
        div(1.2, 10);
        div(20, 0);
    }
    catch (float)
    {
        cout << "Exception caught in main: div by zero\n";
    }
    return 0;
}