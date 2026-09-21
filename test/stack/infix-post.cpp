#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    int precedence(char ch) {
        if(ch == '^') {
            return 3;
        } else if(ch == '*' || ch == '/') {
            return 2;
        } else if(ch == '+' || ch == '-') {
            return 1;
        }
    return 0;
    }
    string infixPostfix(string &infix) {
        string ans = "";
        stack<char> st;
        for(int i=0; i<infix.size(); i++) {
            char ch = infix[i];
            if (isalnum(ch)) {
                ans += ch;
            }
            if(ch == '(') {
                st.push(ch);
            }

            if(ch == ')') {
                while(!st.empty() && st.top() != '(' ) {
                    char t = st.top();
                    ans += t;
                    st.pop();
                } 
                if (!st.empty()) {
                    st.pop();
                }
            } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
                
                while(!st.empty() && precedence(st.top()) >= precedence(ch)) {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
                
            }
           
        }
         while(!st.empty()) {
                char t = st.top();
                ans += t;
                st.pop();
            }
    return ans;

    }
};

int main() {
    Solution sol;
    string infix = "A*(B+C)/D";
    string ans = sol.infixPostfix(infix);
    for(char x: ans) {
        cout << x << " ";
    }
    return 0;
    
}