//What will be the output of the following C++ code?


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack;
    stack.push(21); 
    stack.push(31);  
    stack.push(41);  
    stack.push(51);  

    stack.pop();     
    stack.pop();     

    while (!stack.empty()) {
        cout << stack.top() <<" ";  
        stack.pop();
    }
}