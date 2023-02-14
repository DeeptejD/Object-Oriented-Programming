#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

class shape
{
    string name;

public:
    shape() {}
    shape(string name)
    {
        this->name = name;
    }
    void basic_details()
    {
        cout << "Name: " << name << endl;
    }
};

class circle : public shape
{
    float radius;

public:
    circle() {}
    circle(string name, float radius) : shape(name)
    {
        this->radius = radius;
    }
    float area()
    {
        return (PI * radius * radius);
    }
    void details()
    {
        basic_details();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};

class triangle : public shape
{
    int h, b;

public:
    triangle() {}
    triangle(string name, int h, int b) : shape(name)
    {
        this->h = h, this->b = b;
    }
    float area()
    {
        return (0.5 * b * h);
    }
    void details()
    {
        basic_details();
        cout << "Base: " << b << endl
             << "Height: " << h << endl
             << "Area: " << area() << endl;
    }
};

int main(int argc, char const *argv[])
{
    circle c("circle", 100);
    triangle t("triangle", 50, 10);
    c.details();
    t.details();
    return 0;
}