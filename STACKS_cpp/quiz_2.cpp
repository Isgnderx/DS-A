What will be the output of the following C++ code?


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(5);   
    s.push(10);  
    s.push(15);  
    s.pop();     
    s.push(20);  
    cout << s.top(); 
    return 0;
}