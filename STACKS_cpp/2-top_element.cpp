#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st; //in here we can call anything stack i called "st".
    st.push(10);   //with .push() we can insert new elements.
    st.push(20);
    st.push(30);

    cout << "The top element is: " << st.top() << endl; //.top() shows last inserted(top) element.



    return 0;
}
