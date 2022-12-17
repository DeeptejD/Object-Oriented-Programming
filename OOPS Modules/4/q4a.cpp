#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int x;
    cin>>x;
    try
    {
        if (x > 9999)
            throw x;
        else
            cout << "Cube of the number is: " << x * x * x << endl;
    }
    catch (int)
    {
        cout<<"Arithmeric Exception\n";
    }
    return 0;
}
