#include<iostream>
#include"ST/stack.h"
using namespace std;
class Solution {
public: 
    string reverse(string &s) {
        My_STACK st;
        string rev = "";
        for(int i=0; i<s.size(); i++) {
            st.st_push(s[i]);
        }
        while(!st.st_empty()) {
            rev += st.st_top();
            st.st_pop();
        }
    return rev;

    }
};
int main() {
    Solution sol;
    string s = "hello";
    string ans = sol.reverse(s);
    for(char ch: ans) {
        cout << ch << " ";
    }
    return 0;
}