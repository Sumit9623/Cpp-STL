#include <bits/stdc++.h>
using namespace std;
int main()
{

// *******************  Stacks ************************
    // works on principle LIF0 Last In First Out
    // There are mainly theree operations 
    // 1. push     // at top
    // 2. pop      // at top
    // 3. see top element
    // each operation is performed at top element

    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(15);
    s.push(30);
    while(!s.empty())
    {
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl<<endl;




// **************** Queue ******************************

    // works on principle FIFO   First In First Out
    //  operatios 
    // 1. push    // at end
    // 2. pop     // at front
    // 3. front   // to see front element
    
    // push is operated at last of queue
    // pop is operated at front of queue

    queue <string> que;
    que.push("dhfj");
    que.push("jnmjkfmc");
    que.push("ihekjsnd");
    que.push("dm,ksnfk");
    while(!que.empty())
    {
        cout<<que.front()<<endl;
        que.pop();
    }
    cout<<endl<<endl;

    return 0; 
}