#include <iostream>
using namespace std;

class Time
{
    int hr, min;

public:
    Time() {}
    Time(int);
    friend void operator<<(ostream &, Time &);
};

Time::Time(int duration) { hr = duration / 60, min = duration % 60; }

void operator<<(ostream &output, Time &T)
{
    output << "The time is " << T.hr << " hours and " << T.min << " mins\n";
}

int main()
{
    Time T;
    int duration;
    cin >> duration, T = duration, cout << T;
    return 0;
}