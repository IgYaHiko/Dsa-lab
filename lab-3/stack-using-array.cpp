#include<iostream>
#include<vector>
#include<string>
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
        }
        
        s.pop_back();
    }
    int stack_top() {
        int t;
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

string revStr(string s) {
    My_Stack stack;
    string st = "";
    for(int i=0; i<s.size(); i++) {
        stack.push_stack(s[i]);
    }
    while(!stack.is_empty()) {
        int t = stack.stack_top();
        st.push_back(t);
        stack.stack_pop();
    }
    return st;
}
int main() {
   string s = "MCA";
   string ans = revStr(s);
   cout << ans;
    return 0;
}