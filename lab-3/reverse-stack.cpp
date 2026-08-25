#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    string reverse_string(string s) {
        stack<char> stk;
        string res = "";
        for(int i=0; i<s.size(); i++) {
            stk.push(s[i]);
        }
        while(!stk.empty()) {
            char t = stk.top();
            res.push_back(t);
            stk.pop();
        }
    return res;

    }
};

int main() {
    Solution sol;
    string s = "HELLO";
    string ans = sol.reverse_string(s);
    cout << ans;
    return 0;

}