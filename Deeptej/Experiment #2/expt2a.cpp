#include<bits/stdc++.h>

using namespace std;

void swap(int & x, int & y){
    int temp;
    temp=y;
    y=x;
    x=temp;
}

int main(int argc, char const *argv[])
{
    printf("Swaps two numbers\n");
    int a,b;
    cin>>a>>b;
    printf("before swap\na: %d, b:%d\n", a,b);
    swap(a,b);
    printf("after swap\na: %d, b: %d\n", a, b);
    return 0;
}
