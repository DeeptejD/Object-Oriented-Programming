#include <bits/stdc++.h>
using namespace std;

class rectangle;

class polar
{
    float a, r;

public:
    polar(float a, float r) { this->a = a, this->r = r; }
    polar() {}
    polar(rectangle r);
    void get_polar()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter r: ";
        cin >> r;
    }
    void show_polar()
    {
        cout << "a: " << a << endl
             << "r: " << r << endl;
    }
    friend class rectangle;
};

class rectangle
{
    float x, y;

public:
    rectangle(){};
    rectangle(float x, float y) { this->x = x, this->y = y; }
    rectangle(class polar p);
    void get_rect()
    {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }
    void show_rect()
    {
        cout << "x: " << x << endl
             << "y: " << y << endl;
    }
    friend class polar;
};

rectangle::rectangle(class polar p)
{
    x = p.r * cos(p.a), y = p.r * sin(p.a);
}

polar::polar(rectangle r)
{
    a = atan(r.x / r.y);
    this->r = sqrt(r.x * r.x + r.y * r.y);
}

int main(int argc, char const *argv[])
{
    cout.precision(4);
    class polar p;
    p.get_polar();
    rectangle r;
    r.get_rect();
    cout << "Polar\n";
    p.show_polar();
    cout << "Rectangle\n";
    r.show_rect();
    p = r, r = p;
    cout << "Polar\n";
    p.show_polar();
    cout << "Rectangle\n";
    r.show_rect();
    return 0;
}
