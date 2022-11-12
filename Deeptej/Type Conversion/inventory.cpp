#include <iostream>
using namespace std;
class inv2;

class inv1
{
    int code, total;
    float price;

public:
    inv1() { code = 0, total = 0, price = 0; }
    inv1(int code, int total, int price) { this->code = code, this->total = total, this->price = price; }
    friend void operator<<(ostream &out, inv1 &i1);
    friend void operator>>(istream &in, inv1 &i1);
    int getcode() { return code; }
    float getprice() { return price; }
    float gettotal() { return total; }
    // operator inv2()
    // {
    //     inv2 temp;
    //     temp.code = code;
    //     temp.val = total * price;
    //     return temp;
    // }
};

void operator<<(ostream &out, inv1 &i1)
{
    cout << "Code: " << i1.code << "\nTotal: " << i1.total << "\nPrice: " << i1.price << endl;
}

void operator>>(istream &in, inv1 &i1)
{
    cout << "Enter items for inventory 1\nCode: ";
    cin >> i1.code;
    cout << "Total: ";
    cin >> i1.total;
    cout << "Price: ";
    cin >> i1.price;
}

class inv2
{
    int code;
    float val;

public:
    inv2() { code = 0, val = 0; }
    inv2(int code, float val) { this->code = code, this->val = val; }
    friend void operator<<(ostream &out, inv2 &i2);
    friend void operator>>(istream &in, inv2 &i2);
    inv2(inv1 &i1)
    {
        inv2 temp;
        temp.code = i1.getcode();
        temp.val = i1.getprice() * i1.gettotal();
    }
};

void operator<<(ostream &out, inv2 &i2)
{
    cout << "Code: " << i2.code << "\Value: " << i2.val << endl;
}

void operator>>(istream &in, inv2 &i2)
{
    cout << "Enter items for inventory 2\nCode: ";
    cin >> i2.code;
    cout << "Value: ";
    cin >> i2.val;
}

main()
{
    inv1 i1;
    inv2 i2;
    cin >> i1;
    cout << i1;
    i2 = i1;
    cout << i2;
    return 0;
}