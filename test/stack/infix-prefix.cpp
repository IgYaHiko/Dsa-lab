#include<iostream>
#include<string>
#include"ST/stack.h"
using namespace std;
class Solution {
public:
    string reverse(string s) {
        int i = 0;
        int j = s.size()-1;
        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    return s;
    }
    int precedence(char ch) {
        if(ch == '^') {
            return 3;

        } else if(ch == '/' || ch == '*') {
            return 2;
        } else if(ch == '+' || ch == '-') {
            return 1;
        } 
    return 0;
    }

    string infixPrefix(string &s) {
        My_STACK st;
        string rev = reverse(s);
        string ans = "";

        for(int i=0; i<rev.size(); i++) {
            char ch = rev[i];

            if(isalnum(ch)) {
                ans += ch;
            }
            if(ch == ')') {
                st.st_push(ch);
            }

            if(ch == '(') {
                while(!st.st_empty() && st.st_top() != ')') {
                    ans += st.st_top();
                    st.st_pop();
                }
                // remove the last closing bracket
                if(!st.st_empty()) {
                    st.st_pop();
                }
            } else if(ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '^') {
                while(!st.st_empty() && precedence(st.st_top()) > precedence(ch)) {
                    ans += st.st_top();
                    st.st_pop();
                }
                st.st_push(ch);
            }
        }
        while(!st.st_empty()) {
            ans += st.st_top();
            st.st_pop();
        }
        string prefix = reverse(ans);
        return prefix;
    }
};
int main() {
    Solution sol;
    string exp = "a*(b+c)/d";
    string ans = sol.infixPrefix(exp);
    for(char ch: ans) {
        cout << ch << " ";
    }
    return 0;


}