#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    vector<pair<int,int>> arr;
    stack <int> st;
    cout<<"Enter no of elements in array : "<<endl;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=-1;
    }
    for( auto val : arr)
    {
        if(st.empty()) st.push(val.first);
        else if(st.top()<val.first) st.push(val.first);
        else
        {
            while(!st.empty())
            {
                if(st.top()<val.first) 
                {
                    
                }
                else 
                {
                    st.push(val.first);
                    break;
                }

            }
        }
    }
    cout<<"jfdkxcm"<<endl;
    for(auto val : arr)
    {
        cout<<val.second<<"  ";
    }
    cout<<endl;
    return 0; 
}