#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec={10,20,30,4};
    for(auto val: vec)
    {
        cout<<val<<" ";
    }
    vec.erase(vec.begin()+2);
    for(auto val: vec)
    {
        cout<<val<<" ";
    }




    return 0; 
}