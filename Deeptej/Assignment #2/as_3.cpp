#include <iostream>

using namespace std;

class DM;
class DB;

class DM
{
    // stores dist in m and cm
    float distance;
    int m;
    int cm;

public:
    friend void add(class DM &, class DB &);
    void getdata();
    void printdata();
};

void DM::getdata()
{
    cout << "Enter the distance: (m.cm): ";
    cin >> distance;
    // int floor = distance;
    // m = floor;
    // cm = (distance - floor) * 100;
}

void DM::printdata()
{
    cout << "The distance is "<<distance<<" in m.cm is\nm: " << m << endl
         << "cm: " << cm << endl;
}

class DB
{
    // stores dist in ft and in
    float distance;
    int ft;
    int in;

public:
    friend void add(class DM &, class DB &);
    void getdata();
    void printdata();
};

void DB::getdata()
{
    cout << "Enter the distance (ft.in): ";
    cin >> distance;
    // int floor = distance;
    // ft = floor;
    // in = (distance - floor) * 100;
}

void DB::printdata()
{
    cout << "The distance is "<<distance<<" in ft.in is\nft: " << ft << endl
         << "in: " << in << endl;
}

void add(class DM &dm, class DB &db)
{
    while (1)
    {
        int choice;
        cout << "Choose the mode of final result\n1. m.cm\n2. ft.in\n";
        cin >> choice;
        switch (choice)
        {
        case 1:

            dm.distance += db.distance * 0.305;
            dm.m = dm.distance;
            dm.cm = (dm.distance - dm.m) * 100;
            // dm.distance+=db.distance*0.305;
            // dm.m+=(db.ft*0.305);
            // dm.cm+=db.in*2.54;
            dm.printdata();
            break;
        case 2:
            db.distance += dm.m * 3.28;
            db.ft = db.distance;
            db.in = (db.distance - db.ft) * 100;
            // db.ft+=dm.m*3;
            // db.in+=dm.cm*0.4;
            db.printdata();
            break;
        default:
            cout << "Invalid\n";
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    class DM dm1;
    class DB db1;
    dm1.getdata();
    db1.getdata();
    // dm1.printdata();
    // db1.printdata();
    add(dm1, db1);
    return 0;
}
