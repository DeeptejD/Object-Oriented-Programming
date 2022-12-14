#include <bits/stdc++.h>
using namespace std;

class rectangle;

class polar
{
    int a, r;

public:
    polar(int a, int r) { this->a = a, this->r = r; }
    polar() {}
    polar(rectangle r);
    friend class rectangle;
    void show_polar() { cout << "a: " << a << endl
                             << "r: " << r << endl; }
};

class rectangle
{
    int x, y;

public:
    rectangle(){};
    rectangle(int x, int y) { this->x = x, this->y = y; }
    rectangle(class polar p);
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
    class polar p(10, 20);
    class rectangle r(30, 40);
    cout << "Polar\n";
    p.show_polar();
    cout << "Rectangle\n";
    r.show_rect();
    p = r, r = p;
    p.show_polar();
    r.show_rect();
    return 0;
}
