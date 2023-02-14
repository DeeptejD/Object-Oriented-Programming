#include <iostream>
#include <list>

using namespace std;

void display(list<int> l)
{
    list<int>::iterator p;
    for (p = l.begin(); p != l.end(); p++)
        cout << *p << " ";
    cout << endl;
}

int main(int argc, char const *argv[])
{
    list<int> l1;
    list<int> l2;
    list<int> l3;

    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);

    display(l1);

    l1.sort();

    display(l1);

    l2.push_front(5);
    l2.push_front(6);
    l2.push_front(7);
    l2.push_front(8);

    display(l2);

    l2.sort();

    display(l2);

    l1.merge(l2);

    display(l1);
    return 0;
}
