#include <bits/stdc++.h>
using namespace std;
void printma(map<int,string> &p)  // call by reference  to print map
{
    cout<<"Size = "<<p.size()<<endl;
    for(auto &pa : p)           // macking pa as reference of pairs in map
    {
        cout<<pa.first<<"  "<<pa.second<<endl;
    }
}
int main()
{
    // map stores key value pairs,  but keys are unique.
    // normal maps stores pairs in sorted order of keys.
    // maps are not continous i.e. memory alocation in map is not continous like in array or vector.
    // pairs are stored anywhere in memmory and there is linkege between them
    // so only it++ is acceptable, it=it+1 is illegal   , where it is iterator
    // keys in maps should be unique.

    map<int, string> m;     // declaration
    m[2]="abc";             // insertion complexity is O{lon(n)}
                            // also complexity to access elemets is O{log(n)}
    m[4]="bhxncv";
    m.insert(make_pair(1,"sgdhfb"));
    m[4]="hdnmfdgjfk";                // updating value of key 4.
    printma(m);
    cout<<endl;

    // .find function is used to find value of perticular key
    // find function returns the iterator of recpect to key
    // if perticular key is not present then it will return m.end() iterator

    auto it=m.find(4);  // here it will be the iterator pointing to pair having key 4
    cout<<endl<<it->first<<"  "<<it->second<<endl;
    int n;
    cout<<"Enter key to find pair : "<<endl;
    cin>>n;
    if(m.find(n)!=m.end())
    {
        cout<<(m.find(n))->first<<"  "<<(m.find(n))->second<<endl;
    }
    else cout<<"Key is not present map"<<endl;

    // .erase function to delete perticular pair with time complexity O{log(n)}
    m.erase(2);        // will delete pair of key 2
    cout<<endl;
    // we can also pass iterator to erase function 
    // m.erase(m.find(2));   // where m.find(2) is iterator points to pair having key 2
    printma(m);

    // .clear will delete all elements in map 
    // clear works for all types of containers
    return 0; 
}