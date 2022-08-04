#include <bits/stdc++.h>
using namespace std;
void printvecpair(vector<pair<int,int>> &v)  // call by reference  // function to print vector of pair
{
    for(int i=0;i<v.size();i++)
    {
        // point the pair by index of vector and point element in pair by using .first ans .second
        cout<<v[i].first<<"   "<<v[i].second<<endl;  
    }
}

void printarrvec(vector<int>arr[],int n)   // function to print array of vectors
{
    for(int i=0;i<n;i++)
    {
        for(auto j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printvecvec(vector<vector<int>> vec)   // to print vetor of vector
{
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{

// *************************************************************************
//           ------------------- Vector of pair -------------------

    vector<pair<int,int>> pa={{1,2},{3,4},{5,6}};
    pa.push_back(make_pair(7,8));
    printvecpair(pa);
    int n;
    cout<<"Enter a number n : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cout<<"Enter Pair of elements"<<endl;
        cin>>x>>y;
        pa.push_back({x,y});
    }
    cout<<endl;
    printvecpair(pa);

    //  ****************************************************************************  
    //---------------------  Array of vectors -------------------------------------- 

    int p;
    cout<<"Enter the number of vectors you want in array : "<<endl;
    cin>>p;
    vector<int> arr[p];  // it will create array of p vectors
    for(int i=0;i<p;i++)
    {
        int q;        // size of i th vector
        cout<<"enter size of vector : "<<endl;
        cin>>q;
        cout<<"Enter vector elements : "<<endl;
        for(int j=0;j<q;j++)
        {
            int x;
            cin>>x;
            arr[i].push_back(x);
        }
    }
    printarrvec(arr,p);   // print array of vector  // see the printarrvec defination at top

// ***********************************************************************************************
//            -------------------  Vector of Vector  -------------------------

    vector<vector<int>> vec;
    int a;
    cout<<"Enter no of vectors : "<<endl;
    cin>>a;
    while(a--)
    {
        vector<int> temp;
        cout<<"Enter number elements in i th vector "<<endl;
        int b;
        cin>>b;
        cout<<"Enter element in vector "<<endl;
        while(b--)
        {
            int z;
            cin>>z;
            temp.push_back(z);
        }
        vec.push_back(temp);
    }
    printvecvec(vec);

//****************************************************************************************
    return 0; 
}
