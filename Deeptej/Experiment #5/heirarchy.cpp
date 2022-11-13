#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

class shape
{
    string name;

public:
    shape(string name) { this->name = name; }
    void basic_details() { cout << "The shape is: " << name << endl; }
};

class sphere : public shape
{
    float radius;

public:
    sphere(string name, float radius);
    void display();
    float volume() { return (1.33 * PI * pow(radius, 3)); }
};

sphere::sphere(string name, float radius) : shape(name)
{
    this->radius = radius;
}

void sphere::display()
{
    cout << "The volume of a sphere of radius " << radius << " is: " << volume() << endl;
}

class cone : public shape
{
    float radius, height;

public:
    cone(string name, float radius, float height);
    float volume() { return (0.33 * PI * pow(radius, 2) * height); }
    void display();
};

cone::cone(string name, float radius, float height) : shape(name)
{
    this->radius = radius, this->height = height;
}

void cone::display()
{
    cout << "The volume of a cone of radius " << radius << " and height " << height << " is: " << volume() << endl;
}

int main()
{
    sphere s("sphere", 12.2);
    cone c("cone", 5.4, 8.23);
    s.basic_details();
    s.display();
    cout << "----------------" << endl;
    c.basic_details();
    c.display();
    return 0;
}