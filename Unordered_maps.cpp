#include <bits/stdc++.h>
using namespace std;
int main()
{
    // In unorded map elements pairs are not sorted
    // unoredered maps uses hash table to implement,  while ordered ma uses  red black trese
    // unorderd maps have same functions as ordered maps

    // differences in maps and oreded maps
    // 1. Inbuilt Implimatation     // uses hash table to implement
    // 2. Time complexity
    // 3. valid Keys data_Types

    // in unoredered  maps complex data types can not be used as key values like pair etc
    unordered_map<int,int> m;   //declaration of unordered map
    m[2]=3;                     // complexity   O{1}
    m[4]=5;
    m.insert(make_pair(5,6));      //complexity O{1}
    m.erase(4);                    //complexity  O{1}
    auto it=m.find(2);
    cout<<endl;
    cout<<it->first<<"  "<<it->second<<endl;
    for(auto val: m)
    {
        cout<<val.first<<"  "<<val.second<<endl;
    }
    // other functions are similar to oredered map with complexity O{1}.
    

    
    return 0; 
}