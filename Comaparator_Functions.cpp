#include <bits/stdc++.h>
using namespace std;

bool compa(int a,int b)  // function is defined to decide condition of swaping 
{                        // function is called compartor function.
    if(a>b) return true;   
    else return false;
}

bool cmp(pair<int,int> a, pair<int,int> b)
{       // here logic will decide to swap or no swap
    if(a.first>b.first) return true;  
    else if(a.first==b.first && a.second<b.second) return true; 
    else return false;

    // this function gives logig to sort according to accending order 
    // of 1st element and descending order of 2nd element
}

int main()
{
    // comaprator functions used to give logic when to swap numbers in sort function
    
    int n=6;
    int arr[6]={26,7,4,62,1,3};
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(compa(arr[i],arr[j])) swap(arr[i],arr[j]);
        }
    }

    vector<pair<int,int>> arr1;
    arr1={{4,3},{5,5},{5,3},{25,6},{7,9},{8,5}};
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(cmp(arr1[i],arr1[j])) swap(arr1[i],arr1[j]);
        }
    }
    

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i].first<<"  "<<arr1[i].second<<endl;
    }
    cout<<endl;
//****************************************************************************
            //  for inbuilt swap function 
    int p=6;
    int arr2[]={12,4,6,26,7,8};
    sort(arr2,arr2+n,compa);     // it will swap when compa returns false
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<"  ";
    }
    cout<<endl<<endl;

    vector<pair<int,int>> arr3;
    arr3={{3,4},{4,9},{4,3},{9,7},{10,6}};
    sort(arr3.begin(),arr3.end(),cmp);
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i].first<<"  "<<arr3[i].second<<endl;
    }
    cout<<endl;
    

    
    
    return 0; 
}