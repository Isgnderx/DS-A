//Only print Even integers from stack sam code but with temp stack

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(9);
    st.push(7);
    st.push(4);

    stack<int> temp; // Create Temp stack for stack even integers

    // take even digits from original stack to temp
    while(!st.empty()){
        if(st.top() % 2 == 0){
            temp.push(st.top());
        }
        st.pop(); // delete all checked elements from stack
    }

    // take all even digits from temp to original stack
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    cout << "Inside of Original stack: " << endl;
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
