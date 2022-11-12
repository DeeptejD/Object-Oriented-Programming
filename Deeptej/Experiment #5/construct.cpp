#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

public:
    person() {}
    person(string name, int age)
    {
        this->name = name, this->age = age;
        cout << "Person class constructor intialised\n";
    }
    void showPerson() { cout << "Name: " << name << endl
                             << "Age: " << age << endl; }
};

class hobby
{
    string hobbyname;

public:
    hobby(string hobbyname)
    {
        cout << "Hobby class constructor intialised\n";
        this->hobbyname = hobbyname;
    }
    void showhobby()
    {
        cout << "I like " << hobbyname << endl;
    }
};

class pet : public person,
            public virtual hobby
{
    string petname;
    string pettype;

public:
    pet(string name, int age, string hobbyname, string pettype, string petname) : person(name, age), hobby(hobbyname)
    {
        this->pettype = pettype, this->petname = petname;
        cout << "Pet class constructor intialised\n";
    }
    void showPet() { cout << "Pet: " << pettype << endl
                          << "Pet's name: " << petname << endl; }
};

int main()
{
    pet p("Harry", 27, "Stargazing", "Koala", "eucalyptusboi");
    p.showPerson();
    cout << "----------\n";
    p.showhobby();
    cout << "----------\n";
    p.showPet();

    return 0;
}