#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> list1;

    list1.push_front(4);
    list1.push_front(1);
    list1.push_front(9);
    list1.push_back(6);
    list1.push_back(3);

    cout << "Original list: ";
    for (int x : list1)
    {
        cout << x << " ";
    }
    cout << endl;

    list<int> list2;
    list2.push_back(5);
    list2.push_back(2);
    list2.push_back(7);

    list1.splice(list1.end(), list1);

    cout << "After splice: ";
    for (int x : list1)
    {
        cout << x << " ";
    }
    cout << endl;

    list1.sort();

    cout << "After sort: ";
    for (int x : list1)
    {
        cout << x << " ";
    }
    cout << endl;

    list<int> list3;
    list3.push_back(9);
    list3.push_back(10);
    list3.push_back(11);

    list1.merge(list3);

    cout << "After merge: ";
    for (int x : list1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}