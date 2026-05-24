What will be the output of the following C++ code?


#include <iostream>
#include <stack>
using namespace std;

int main() {
    int sum = 0;
    stack<int> mystack;

    mystack.push(1);  
    mystack.push(9);  
    mystack.push(3); 
    mystack.push(7);  
    mystack.push(5);  

    while (!mystack.empty()) {
        sum = sum + mystack.top();  
        mystack.pop();              
    }

    cout << sum;  
    return 0;
}