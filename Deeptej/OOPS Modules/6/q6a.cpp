#include "bits/stdc++.h"

using namespace std;

int main()
{
    vector<int> v1(10,10);
    v1[0] = 6;
    v1[v1.size()-1] = 9;

    for(int i = 0 ; i < v1.size() ; i++)
    cout<<v1[i]<<"\t";

}