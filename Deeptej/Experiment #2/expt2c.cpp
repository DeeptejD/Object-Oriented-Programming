#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add(int a, int b, int c){
    return a+b+c;
}

void add(){
    cout<<"this is an example of function overloading"<<endl;
}

int main(int argc, char const *argv[])
{
    cout<<add(5,9)<<endl;
    cout<<add(6.9, 7.7, 5.4)<<endl;
    add();
    return 0;
}
