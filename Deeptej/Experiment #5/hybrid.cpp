#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    Student(string name, int roll) { this->name = name, this->roll = roll; }
    Student() {}
    void show_basic()
    {
        cout << "Name: " << name << endl
             << "Roll: " << roll << endl;
    }
};

class Sports : public virtual Student
{
    int sports_marks;

public:
    Sports(string name, int roll, int sports_marks) : Student(name, roll)
    {
        this->sports_marks = sports_marks;
    }
    Sports() {}
    void show_sports()
    {
        cout << "Sports marks: " << sports_marks << endl;
    }
};

class Project : public virtual Student
{
    int project_marks;

public:
    Project(string name, int roll, int project_marks) : Student(name, roll)
    {
        this->project_marks = project_marks;
    }
    Project() {}
    void show_project() { cout << "Project marks: " << project_marks << endl; }
};

class Result : public Project, public Sports
{
    int final_marks;

public:
    Result(string name, int roll, int sports_marks, int project_marks) : Student(name, roll), Sports(name, roll, sports_marks), Project(name, roll, project_marks)
    {
        final_marks = project_marks + sports_marks;
    }
    void show_final_result()
    {
        show_basic();
        cout << "----------" << endl;
        Sports::show_sports();
        cout << "----------" << endl;
        show_project();
        cout << "----------" << endl;
        cout << "Final Result: " << final_marks << endl;
        cout << "----------" << endl;
    }
};

int main()
{

    Result r1("Jonah", 211105076, 50, 80);
    r1.show_final_result();

    return 0;
}