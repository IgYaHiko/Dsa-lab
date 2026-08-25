#include<iostream>
#include<string>
#include<vector>
using namespace std;

class My_Stack {
public:
    vector<int> s;
    void push_stack(int n) {
        s.push_back(n);
    }
    void stack_pop() {
        if(s.empty()) {
            cout << "Stack is empty";
            return;
        }
        
        s.pop_back();
    }
    char stack_top() {
        char t;
        if(!s.empty()) {
            t = s[s.size()-1];
        }
        return t;
    }
    void display_stack() {
        for(int i=0; i<s.size(); i++) {
            cout << " your stack:" << "->" << s[i] << endl;
        }
    }
    bool is_empty() {
        if(s.size() == 0) {
            return true;
        } else {
            return false;
        }
        
    }
};
bool validParen(string& s) {
    My_Stack stack;
    for(int i=0; i<s.size(); i++) {
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack.push_stack(s[i]);
 
        }

        if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if(stack.is_empty()) {
                return false;
            }
            if(s[i] == ')' && stack.stack_top() == '(') {
                stack.stack_pop();
            } else if (s[i] == '}' && stack.stack_top() == '{') {
                stack.stack_pop();
            } else if ( s[i] == ']' && stack.stack_top() == '[' ) {
                stack.stack_pop();
            }
            else {
                return false;
            }
        }
        
        
    }
    if(!stack.is_empty()) {
        return false;
    } else {
        return true;
    }

}

int main() {
    string s = "{}[]()";
    bool a = validParen(s);
    cout << boolalpha << a;
    return 0;

}

