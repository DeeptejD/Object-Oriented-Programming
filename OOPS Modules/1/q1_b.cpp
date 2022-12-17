#include <iostream>
#include <iomanip>

using namespace std;

class list
{
    string name;
    int code;
    float cost;

public:
    list() {}
    list(string name, int code, float cost)
    {
        this->name = name;
        this->code = code;
        this->cost = cost;
    }
    void getdata()
    {
        cout << "Enter name: ";
        getchar();
        getline(cin, name);
        cout << "Code: ";
        cin >> code;
        cout << "Cost: ";
        cin >> cost;
    }
    void showdata(list li[], int i)
    {
        cout.width(10);
        cout << li[i].name;
        cout.width(7);
        cout << li[i].code;
        cout.width(7);
        cout << fixed << setprecision(2) << showpoint << li[i].cost << endl;
    }
};

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    list li[n];
    for (int i = 0; i < n; i++)
    {
        li[i].getdata();
    }
    // actual printing
    cout.setf(ios::left, ios::adjustfield);
    cout.fill('-');
    cout.width(22);
    cout << "" << endl;
    cout.fill(' ');
    cout.width(10);
    cout << "Name";
    cout.width(7);
    cout << "Code";
    cout.width(7);
    cout << "Cost" << endl;
    cout.fill('-');
    cout.width(22);
    cout << "" << endl;
    cout.fill(' ');
    for (int i = 0; i < n; i++)
        li[i].showdata(li, i);
    return 0;
}
