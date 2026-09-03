#ifndef MY_QUEUE_H
#define MY_QUEUE_H

#include<iostream>
#include<vector>

using namespace std;

class My_Queue  {
public:
    vector<int> q;

    void enqueue(int n) {
        q.push_back(n);
    }

    void dequeue() {
        q.erase(q.begin());
    }

    int peek() {
        int front = q[0];
        return front;
    }
    int rear() {
        int r = q[q.size()-1];
        return r;
    }
    bool isEmpty() {
        if(q.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
    int q_size() {
        return q.size();
    }
    void display() {
        for(int i=0; i<q.size(); i++) {
            cout << "Queue element -> " << q[i] << " ";
        }
    }
};


#endif