#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void get_roll();
    void show_roll();
};

void student::get_roll()
{
    cout << "Enter roll number: " << endl;
    cin >> roll_number;
}

void student::show_roll()
{
    cout << "Roll number: " << roll_number << endl;
}

class test_scores : public student
{
protected:
    // int roll_number;
    int sub1;
    int sub2;

public:
    // void get_roll();
    // void show_roll();
    void get_marks();
    void showmarks();
};

void test_scores::showmarks()
{
    cout << "Sub1: " << sub1 << endl
         << "Sub2: " << sub2 << endl;
}

void test_scores::get_marks()
{
    cout << "Enter marks in sub1: ";
    cin >> sub1;
    cout << "Enter marks in sub2: ";
    cin >> sub2;
}

class result : public test_scores
{
    // protected:
    //     int roll_number;
    //     int sub1;
    //     int sub2;

private:
    int finalscore;

public:
    // void get_roll();
    // void show_roll();
    // void get_marks();
    // void showmarks();
    void getresult();
    void showresult();
};

void result::getresult()
{
    finalscore = sub1 + sub2;
}

void result::showresult()
{
    cout << "Result: " << finalscore << endl;
}

int main()
{
    result obj1;
    obj1.get_roll();
    obj1.get_marks();
    obj1.getresult();
    obj1.show_roll();
    obj1.showmarks();
    obj1.showresult();
    return 0;
}

// OUTPUT
// Enter roll number:
// 211105017
// Enter marks in sub1: 100
// Enter marks in sub2: 23
// Roll number: 211105017
// Sub1: 100
// Sub2: 23
// Result: 123