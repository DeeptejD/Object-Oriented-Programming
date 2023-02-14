#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    Student(){};
    Student(string name, int roll)
    {
        this->name = name, this->roll = roll;
    }
    void showstud()
    {
        cout << "Name: " << name << endl
             << "Roll: " << roll << endl;
    }
};

class Sports : virtual public Student
{
    int sports;

public:
    Sports(string name, int roll, int sports) : Student(name, roll)
    {
        this->sports = sports;
    }
    void showsports()
    {
        cout << "Sports marks: " << sports << endl;
    }
};

class project : public Sports
{
    int proj;

public:
    project(string name, int roll, int sports, int proj) : Student(name, roll), Sports(sports)
    {
        this->proj = proj;
    }
    void showfinal()
    {
        
    }
}

int
main(int argc, char const *argv[])
{

    return 0;
}