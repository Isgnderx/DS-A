#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st; //in here we can call anything stack i called "st".
    st.push(10);   //with .push() we can insert new elements.
    st.push(20);
    st.push(30);

    st.pop();      //.pop() function deletes the top element in stack.

    cout << "The top element is: " << st.top() << endl; //.top() shows last inserted(top) element.
    cout << st.size() << endl;  //.size() shows how many elements in stack.
    if(st.empty()){             //.empty() is for check stack is empty or not if empty(True) if not(False).

        cout << "Stack is empty!" << endl;
    }
    else{

        cout << "Stack is not empty!" << endl;
    }

    return 0;
}
