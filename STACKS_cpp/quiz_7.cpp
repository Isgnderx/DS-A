#include <iostream>
#include <stack>
#include <string>

using namespace std;

/*
    Problem: Balanced Parentheses (Valid Parentheses)
    Description: Check if a given string of parentheses is mathematically valid.
    Algorithm: Uses a Stack data structure (LIFO). 
               - Pushes '(' onto the stack.
               - Pops from the stack when ')' is encountered.
               - If a ')' appears with an empty stack, or if the stack is not empty at the end, it is invalid.
*/

int main() {
    string str;
    cout << "Enter the parentheses sequence: ";
    cin >> str;

    stack<char> st;
    bool is_valid = true; // Flag to track the validity status

    for (char ch : str) {
        // If an opening bracket is found, push it onto the stack
        if (ch == '(') {
            st.push(ch);
        }
        // If a closing bracket is found, check for a matching opening bracket
        else if (ch == ')') {
            if (st.empty()) {
                is_valid = false; // Invalid because there is no matching opening bracket
                break;
            }
            st.pop(); // Successfully matched and removed the pair
        }
    }

    // Final Validation: The stack must be completely empty and no errors should be triggered
    if (st.empty() && is_valid) {
        cout << "Valid parentheses sequence!" << endl;
    } else {
        cout << "Invalid parentheses sequence!" << endl;
    }

    return 0;
}