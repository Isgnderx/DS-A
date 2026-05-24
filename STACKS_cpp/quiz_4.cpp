//Write a program which is user input any string and it writes elements on stack by reversed order.

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    string str;
    cin >> str;  //User writes a string.
    
    stack<char> st;
    
    for(char ch : str){

        st.push(ch);
    }

    while(!st.empty()){

        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
