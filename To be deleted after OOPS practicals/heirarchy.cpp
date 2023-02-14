#include <bits/stdc++.h>
using namespace std;

class animal
{
    string name;
    string type;

public:
    animal() {}
    animal(string a, string b) { name = a, type = b; }
    virtual void showanimal()
    {
        cout << "Name: " << name << endl
             << "Type: " << type << endl;
    }
};

class bird : public animal
{
    int wingspan;

public:
    bird(string name, string type, int wingspan) : animal(name, type)
    {
        this->wingspan = wingspan;
    }
    void showbird()
    {
        showanimal();
        cout << "Wingspan: " << wingspan << endl;
    }
};

class mammal : public animal
{
    string eatingprofile;

public:
    mammal(){};
    mammal(string name, string type, string eatingprofile) : animal(name, type)
    {
        this->eatingprofile = eatingprofile;
    }
    void showmammal()
    {
        showanimal();
        cout << "Eating Profile: " << eatingprofile << endl;
    }
};

class hybrid : public bird, public mammal
{
    string name
};

int
main(int argc, char const *argv[])
{
    bird b("sparrow", "flying", 15);
    mammal m("deer", "land", "herbivorous");
    b.showbird();
    m.showmammal();
    return 0;
}