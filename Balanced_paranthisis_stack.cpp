#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <char> st;
    string s;
    int flag=0;
    cout<<"Enter string of brackets : ";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==']' && st.top()=='[' && !st.empty()) st.pop();
        else if(s[i]=='}' && st.top()=='{' && !st.empty()) st.pop();
        else if(s[i]==')' && st.top()=='(' && !st.empty()) st.pop();
        else 
        {
            flag=1;
            break;
        }
    }
    if(st.empty() && !flag) cout<<"Yes"<<endl;
    else cout<<"No";
    


    return 0; 
}