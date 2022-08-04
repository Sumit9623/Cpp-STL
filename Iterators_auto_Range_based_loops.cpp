#include <bits/stdc++.h>
using namespace std;
int main()
{
    // iterators are used to point the elements of containers
    // iterators are similar to pointers
    // containers in which elements can't point by indises then we can use iterators with * operartor.

    // elements in containers like array and vectors are in continous memory
    // so next element can be acesses using it++ or it=it+1;

    // but the elements in containers like map and set are non continous in memmory
    // so iterator can point to next memmory by using only it++   , it=it+1 is invalid

    // first element in container is point by using .begin()  and .end() point to next to last element

    // syntax to declare iterator is given by
    // container_data_type :: iterator it;

    vector<int> vec={1,2,3,10,20,22};
    for(vector<int> ::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    vector<pair<int,int>> pai={{1,2},{3,4},{5,6}};
    for(vector<pair<int,int>> :: iterator ittt=pai.begin();ittt!=pai.end();ittt++)
    {
        cout<<ittt->first<<"  "<<ittt->second<<endl;
        // cout<<(*ittt).first<<"  "<<(*ittt).second<<endl;     // we can use this also
    }
    cout<<endl;

//*************************************************************************************
//                       auto keyword
 
    // auto used to automatically detect data type 
    // instead of using vector<int> :: iterator we can use auto to detect data type automatically

    auto a=10;                       // int type
    cout<<typeid(a).name()<<endl;    
    auto b=10.2;                     // double type
    cout<<typeid(b).name()<<endl;    
    auto itp=vec.begin();            // iterator type
    cout<<typeid(itp).name();

    for(auto itt=vec.begin();itt!=vec.end();itt++)   // auto will automatically detect type itt
    {
        cout<<*itt<<" ";
    }
    cout<<endl;
    
    for(auto itt=pai.begin();itt!=pai.end();itt++)
    {
        cout<<itt->first<<"  "<<itt->second<<endl;
    }
    cout<<endl;
//*************************************************************************************
    //                      range based loops

    vector<int> aa={2,5,6,4,8,9};
    for(int val : aa) // for each iteration val will take value for aa
    {                 // val is just copy of all elements in aa 
                      //so if we update val elements in aa will not ggoing to change 
        cout<<val<<" ";
    }
    cout<<endl<<endl;
    for(auto pa : pai) //auto will automatically sense the data type of pa                      
    {                  // pa will point to every pair in vector pai
        cout<<pa.first<<"  "<<pa.second<<endl;
    }
    cout<<endl;

    for(int &val : aa)  // Now val is reference of elements in aa
    {
        val++;
    }
    for(auto i=aa.begin();i!=aa.end();i++) // printing updated aa
    {
        cout<<(*i)<<" ";
    }
    cout<<endl;
    return 0; 
}