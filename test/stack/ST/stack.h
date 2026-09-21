#ifndef MY_STACK
#define MY_STACK

#include<iostream>
#include<vector>


class My_STACK {
public:
    std::vector<int> st;

    void st_push(int x) {
        st.push_back(x);
    }

    void st_pop() {
        st.pop_back();
    }

    int st_top() {
        if(st.empty()) {
            std::cout << "stack is empty ->" << std::endl;
            return -1;
        } 
        int top = st[st.size()-1];
        return top;


    }

    bool st_empty() {
        return st.empty();
    }

    void display_st() {
        for(int i=0; i<st.size(); i++) {
            std::cout << st[i] << " " << std::endl;
        }
    }
};
#endif