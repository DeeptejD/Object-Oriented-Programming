#include <iostream>
using namespace std;

class place
{
    string name;

public:
    void getname();
    void display();
};

void place::display()
{
    cout << "I am in " << name << endl;
}

void place::getname()
{
    cout << "Enter the name of the place: ";
    getline(cin, name);
}

class weather
{
    string weather;

public:
    void getname();
    void display();
};

void weather::display()
{
    cout << "The weather here is " << weather << endl;
}

void weather::getname()
{
    cout << "Enter the weather: ";
    getline(cin, weather);
}

class trip : public place, public weather
{
public:
    void display();
    void getname();
};

void trip::getname()
{
    place::getname();
    weather::getname();
}

void trip::display()
{
    place::display();
    weather::display();
}

int main()
{
    trip t;
    t.getname();
    t.display();
    return 0;
}