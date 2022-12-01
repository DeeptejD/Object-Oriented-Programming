#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout.setf(ios::left, ios::adjustfield);
    cout.width(17), cout << "No. of lines", cout.width(17), cout << "No. of words", cout.width(17), cout << "Number of Characters" << endl;
    
    return 0;
}