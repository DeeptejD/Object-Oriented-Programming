#include <iostream>
using namespace std;

class Media
{
public:
    virtual void display_rating() = 0;
};

class book : private Media
{
    string name;
    int rating;

public:
    book(string name, int rating) { this->name = name, this->rating = rating; }
    void display_rating()
    {
        cout << "The rating for the book " << name << " is: " << rating << endl;
    }
};

class tape : private Media
{
    string name;
    int rating;

public:
    tape(string name, int rating) { this->name = name, this->rating = rating; }
    void display_rating()
    {
        cout << "The rating for the tape " << name << " is: " << rating << endl;
    }
};

int main(int argc, char const *argv[])
{
    book b("Up", 4);
    tape t("alladin", 5);
    b.display_rating(), t.display_rating();
    return 0;
}
