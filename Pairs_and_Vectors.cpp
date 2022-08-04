#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair is just combination of two data types having some relation.
    
    pair<int,int> p; // pair of two intergers.
    // it maintain the relation  through out the all operations.
    // eg 1   2   3   4
    //    a   b   c   d
    // is a vector pair int, char, if we swap elements 1 and 3 then a ans c will also get swap.
    // result after swap  will be
    //    3   2   1   4
    //    c   b   a   d


    pair <int, string> p1;       // declaration of pair;
    p1=make_pair(1,"abc");       // giving value to pair
    pair<int ,int> pa = {1,2};   // anather way to make pair
    
    // pairname.first is used to point first element in pair
    // similarly pairname.secong is used to point second element in pair
    cout<<"pair p1 is : "<<p1.first<<"  "<<p1.second<<endl;

    // coping one pair in anather 
    pair<int ,string> p3=p1;  // it will only copy the content p1 in p3, when we change p1 , p3 will not change 

    // But if we make refence then if we change one pair other pair will change automatically just like reference variable
    pair<int,string> &p4=p1; // macking p4 refernce of p1

    p1.first=2;         // Changed p1 pair
    p1.second="Sumit";
    cout<<"p3 will not change : "<<p3.first<<"  "<<p3.second<<endl;
    cout<<"p4 will change as it is reference of p1 : "<<p4.first<<"  "<<p4.second<<endl;


// ****************************************************************************************
// ****************************************************************************************

    //                        Array of pair

    pair<int, int > arr[5];  // Declaring array of 5 pairs
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a pair :";
        cin>>arr[i].first>>arr[i].second;
    }
    cout<<endl;
    cout<<"pair of array is : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i].first<<"   "<<arr[i].second<<endl;
    }

    // similarly we can define array of vectors 
    // it will have static no of rows but dynamic no of columns
//*****************************************************************************************
//*****************************************************************************************

    

    // mostly array of pair is not used due to static size. 
    // so vectors are preffered due to their dynamic size.

    // decalring differnt types of vector
    vector<int> vec1;             // simple vector
    vector<int> vec4(5,2);        // initialize the vector of initial size 5 and value 2 later we can increse size
    vector<vector<int>> vec2;     // 2D Vector or vector of vector
    vector<pair<int,int>> vec3;   // vector of pair

    // vector can be accesed by index as well as iterators
    // .push_back()  used to push element at end        // complexity O(1)
    // .pop_back()  used to pop last element in vector  // complexity O(1)
    // .size()   used to find size of vector            // complexity O(n)
    // .clear()    used to delete all elemets
    // .erase(iterator) used to delete perticular element
    // .insert(iterator)  used to insert element before given iterator

    // we can copy one vector in anather directy like pair
    vec1.push_back(12);
    vec1.push_back(9);
    vector<int> vec5=vec1;   //   complexity   O(n);
    // when we change vec1 its changes after copy will not reflect in vec5
    // but if we declare reference as vec5 of vec1 then changes in vec1 will reflect in vec5
    cout<<endl<<endl;
    cout<<"vector vec1 is "<<vec1[0]<<"  "<<vec1[1]<<endl;
    cout<<"vector vec5 is "<<vec5[0]<<"  "<<vec5[1]<<endl;

// ****************   Vector of pair    *******************

    cout<<endl<<endl;
    vector<pair<int,string>> vecp;
    vecp.push_back(make_pair(10,"Sumit"));
    vecp.push_back({11,"Tupe"});
    cout<<vecp[0].first<<"   "<<vecp[0].second<<endl;
    cout<<vecp[1].first<<"   "<<vecp[1].second<<endl;

    return 0; 
    

} 