#include <iostream>
using namespace std;

class Multiply
{
    float x;
    float y;
    float result;

public:
    // function defined in the class is inline by default
    friend float diff(); // this makes diff a friend func to class Multiply
    void takeinput()
    {
        printf("Enter x: ");
        cin >> x;
        printf("Enter y: ");
        cin >> y;
    }
    float prod()
    {
        result = x * y;
        return result;
    }
};

float diff(){
    class Multiply m;
    m.takeinput();
    return m.x-m.y;
}

inline int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    class Multiply m;
    m.takeinput();
    cout << ("Product: %.2f\n", m.prod());
    int a, b;
    cout << ("\nEnter a: ");
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    printf("sum of %d and %d is: %d\n", a, b, sum(a, b));
    cout<<diff();
    return 0;
}
