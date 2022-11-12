#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    void getbasic();
};

void Student::getbasic()
{
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> roll;
}

class test_scores : virtual public Student
{
protected:
    int sub1, sub2;

public:
    void get_marks();
};

void test_scores::get_marks()
{
    cout << "Enter marks in sub1: ";
    cin >> sub1;
    cout << "Enter marks in sub2: ";
    cin >> sub2;
}

class sports : virtual public Student
{
protected:
    int scores;

public:
    void get_scores();
};

void sports::get_scores()
{
    cout << "Enter scores in sports: ";
    cin >> scores;
}

class result : public sports, public test_scores
{
    // protected:
    // string name;
    // int roll;
    // int scores;
    // int sub1, sub2;
private:
    int final_score;

public:
    void compute_result();
    void show_result();
};

void result::compute_result()
{
    final_score = sub1 + sub2 + scores;
}

void result::show_result()
{
    cout << "Name: " << name << endl;
    cout << "Roll no: " << roll << endl;
    cout << "--------------\n";
    cout << "Sub1: " << sub1 << endl;
    cout << "Sub2: " << sub2 << endl;
    cout << "--------------\n";
    cout << "Sports: " << scores << endl;
    cout << "--------------\n";
    cout << "Final Score: " << final_score << endl;
}

int main()
{
    result s;
    s.getbasic();
    s.get_marks();
    s.get_scores();
    s.compute_result();
    s.show_result();
    return 0;
}