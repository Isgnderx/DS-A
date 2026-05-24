#include <iostream>
#include <stack>

using namespace std;

/*
    A stack cannot be directly traversed, but by creating a copy 
    and repeatedly accessing and popping the top element, 
    we can traverse it without modifying the original stack.
*/

int main(){
    stack<int> st;
    st.push(10); 
    st.push(20);
    st.push(30);

    //copy of stack
    stack<int> temp(st);   //we create temp copy of main stack.

    while(!temp.empty()){  // while temp stack is not empty show and delete top element.

        cout << temp.top() << endl;
        temp.pop();
    }
    return 0;
}
