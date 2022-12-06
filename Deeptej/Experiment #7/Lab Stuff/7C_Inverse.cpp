#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << setw(10) << "n" << setw(20) << "Inverse of n" << setw(20) << "Sum of terms" << endl;
    float sum = 0.0, inv;
    for (int i = 1; i <= n; i++)
    {
        inv = 1 / float(i);
        sum += inv;
        cout.setf(ios::showpoint);
        cout << setw(10) << i
             << setw(19) << setprecision(4) << setiosflags(ios::scientific) << inv
             << resetiosflags(ios::scientific) << setprecision(5) << setw(18) << sum << endl;
    }
    return 0;
}
