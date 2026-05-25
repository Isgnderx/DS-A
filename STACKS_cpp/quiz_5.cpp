//Only print Even integers from stack

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(9);
    st.push(7);
    st.push(4);



    while(!st.empty()){
        if(st.top() % 2 == 0){
        cout << st.top() << endl;
        }
        st.pop();
    }

    return 0;
}
