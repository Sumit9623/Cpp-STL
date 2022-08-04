#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    arr={6,4,10,1,22,3,74,22,12};

    // min_element function returns poiter or iterator hence we use * with min_element()
    int min = *(min_element(arr.begin(),arr.end()));
    cout<<"Minimum element in vector is : "<<min<<endl;

    int max = *(max_element(arr.begin(),arr.end()));
    cout<<"Maximum element in vector is : "<<max<<endl;
    
    // 0 in accumulate argument is the initial sum, we can keep any other value  and it will add to final sum
    int sum= accumulate(arr.begin(),arr.end(),0);
    cout<<"Sum of vector from begin to end is : "<<sum<<endl;
    
    // count function used to number of counts 
    int c=count(arr.begin(),arr.end(),22);
    cout<<"Count of "<<22<<" in arr is : "<<c<<endl;

    auto it = find(arr.begin(),arr.end(),3);  // if element not present then it will return poiter of next to last element.
    if(it!=arr.end()) cout<<"element found at index "<<it-arr.begin()<<endl;
    else cout<<"Element not found"<<endl;

    // Revere the vector or array
    reverse(arr.begin(),arr.end());  // to reverse in given range
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;

    string s="d fhbdjf bdjbfgf";
    reverse(s.begin(),s.begin()+6);  
    cout<<s<<endl;

    // similary we can use this functions for arrays by giving specific range.


    return 0; 
}