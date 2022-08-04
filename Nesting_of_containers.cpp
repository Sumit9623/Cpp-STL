#include <bits/stdc++.h>
using namespace std;
int main()
{

    // eg
    map<pair<int,int>,string> m;
    m[{1,2}]="hfbx0";
    m[{10,1}]="jfckvc";
    m[{0,4}]="njkdx,";
    m[{0,3}]="jdddddnf";
    for(auto val: m)
    {
        cout<<val.first.first<<"  "<<val.first.second<<" :  "<<val.second<<endl;
    }
    // sorting is based on keys 
    // here pairs are compared  then inserted in map

    // we can form lots of combinations like that with set, maps , vectors ,pairs etc.
    cout<<endl;
    return 0; 
}