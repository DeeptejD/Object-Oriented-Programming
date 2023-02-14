#include <bits/stdc++.h>
using namespace std;

class student
{
    string name, roll;

public:
    student() {}
    student(string name, string roll)
    {
        this->name = name, this->roll = roll;
    }
    void showbasic()
    {
        cout << "Name: " << name << endl
             << "Roll: " << roll << endl;
    }
};

class Project : virtual public student
{
    int projm;

public:
    Project() {}
    Project(string name, string roll, int projm) : student(name, roll) { this->projm = projm; }
    void showproj()
    {
        cout << "Project marks: " << projm << endl;
    }
};

class sports : virtual public student
{
    int smarks;

public:
    sports() {}
    sports(string name, string roll, int smarks) : student(name, roll)
    {
        this->smarks = smarks;
    }
    void showsports()
    {
        cout << "Sports marks: " << smarks << endl;
    }
};

class Result : public Project, public sports
{
    int finalmarks;

public:
    Result(string name, string roll, int projm, int smarks) : student(name, roll), Project(name, roll, projm), sports(name, roll, smarks)
    {
        finalmarks = smarks + projm;
    }
    void showresult()
    {
        showbasic();
        showsports();
        showproj();
        cout << "Grand total: " << finalmarks << endl;
    }
};

int main(int argc, char const *argv[])
{
    Result r("Deeptej", "211105017", 90, 70);
    r.showresult();
    return 0;
}