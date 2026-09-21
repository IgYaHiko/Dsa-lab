#ifndef MY_QUEUE
#define MY_QUEUE


#include<iostream>
#include<vector>
using namespace std;

class My_queue {
public:
    vector<int> q;
    
    void enqueue(int x) {
        q.push_back(x);
    }
    void dequeue() {
        q.erase(q.begin());

    }

    int peek() {
        int f = q[0];
        cout << "\n --- front element --- \n";
        cout << "front element -> " << f;
        return f;
    }

    int rear() {
        int r = q[q.size()];
        cout << "\n --- rear element --- \n";
        cout << "rear element -> " << r;
        return r;
    }
    bool isEmpty() {
        return q.empty();
    }

    void display_q() {
        for(int i=0; i<q.size(); i++) {
            cout << q[i] << " ";
        }
    }

};


#endif