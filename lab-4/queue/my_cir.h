#ifndef MY_Cir_H
#define MY_Cir_H
#include<iostream>
#include<vector>
using namespace std;

class CircularQueue {
    vector<int> q;
    int front;
    int rear;
    int capacity;
    int count;
    public: 
        CircularQueue(int size) {
            capacity = size;
            q.resize(size);
            front = 0;
            rear = 0;
            count = 0;

        }
        void enqueue(int n) {
            if(count == capacity) {
                cout << "---Queue is full---";
                return;
            }
            q[rear] = n;
            rear = (rear + 1) % capacity;
            count++;
        }

        void dequeue() {
            if(count == 0) {
                cout << "---Queue is empty---";
                return;
            }   
            front = (front+1)%capacity;
        }
    
};

#endif