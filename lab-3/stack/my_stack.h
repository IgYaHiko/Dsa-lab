#ifndef MY_STACK_H
#define MY_STACK_H

#include <iostream>
#include <vector>

using namespace std;

class My_Stack {
public:
    vector<int> s;

    void push_stack(int n) {
        s.push_back(n);
    }

    void stack_pop() {
        if (s.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        s.pop_back();
    }

    int stack_top() {
        if (!s.empty()) {
            return s.back();
        }

        return -1;
    }

    void display_stack() {
        for (int i = 0; i < s.size(); i++) {
            cout << "your stack: -> " << s[i] << endl;
        }
    }

    bool is_empty() {
        return s.empty();
    }
};

#endif