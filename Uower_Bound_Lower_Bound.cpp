#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={4,6,6,25,7,9};
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int *ptr;

    // before applying lower_bound or upper_bound array or vector should be sorted
    // lower bound will return address of same element if present otherwise it will return adress of next greture element
    // if we find lower bound for element greture than max then it will return garbage value
    ptr=lower_bound(arr,arr+n,6);
    cout<<"Lower Bound of "<<6<<" is : "<<*ptr<<endl;
    ptr=lower_bound(arr,arr+n,4);
    cout<<"Lower Bound of "<<4<<" is : "<<*ptr<<endl;
    ptr=lower_bound(arr,arr+n,8);
    cout<<"Lower Bound of "<<8<<" is : "<<*ptr<<endl;
    ptr=lower_bound(arr,arr+n,23);
    cout<<"Lower Bound of "<<23<<" is : "<<*ptr<<endl;

    cout<<endl<<endl;

    // upper bound will always return adress of next greture element;
    // upper boound of max element will give garbage value.
    ptr=upper_bound(arr,arr+n,6);
    cout<<"Upper Bound of "<<6<<" is : "<<*ptr<<endl;
    ptr=upper_bound(arr,arr+n,4);
    cout<<"Upper Bound of "<<4<<" is : "<<*ptr<<endl;
    ptr=upper_bound(arr,arr+n,8);
    cout<<"Upper Bound of "<<8<<" is : "<<*ptr<<endl;
    ptr=upper_bound(arr,arr+n,23);
    cout<<"Upper Bound of "<<23<<" is : "<<*ptr<<endl;

//*****************************************************************************************

//             upper_bound and lower_bound for set and maps

// syntax:
// 1) s.lower_bound(value);                     complexity : O{log(n)}
// 2) lower_bound(s.begin(),s.end(),value);     complexity : O(n)
// therefore always 1st syntax is preffered
// here s can be set or map
// in case of map upper_bound and lower_bound will apply on keys only 
    return 0; 
}