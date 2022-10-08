#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class DM;
class DB;

class DM{
    float dist;
    int m;
    int cm;
    public:
    void getDM(){
        cout<<"Enter distance: ";
        cin>>dist;
        int floor=dist;
        m=floor;
        cm=100*(dist-floor);
    }
};

class DB{
    float dist;
    int ft;
    int in;
    public:
    void getDM(){
        cout<<"Enter distance: ";
        cin>>dist;
        int floor=dist;
        ft=floor;
        in=100*(dist-floor);
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
