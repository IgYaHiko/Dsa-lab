#ifndef MY_CIR_QUEUE
#define MY_CIR_QUEUE
#include<iostream>
#include<vector>
using namespace std;

class My_circular_queue {
public:
    vector<int> q;
    int front;
    int rear;
    int count;
    int capacity;

    My_circular_queue(int size) {
        capacity = size;
        q.resize(size);

        front = 0;
        rear = 0;
        count = 0;
    }

    void enqueue(int n) {
        if(count  == capacity) {
            cout << "\n --- the queue is full --- \n";
            return;
        }
        q[rear] = n;
        rear = (rear + 1) % capacity;
        count ++;
    }
    void dequeue() {
        if(count == 0) {
            cout << "\n --- the queue is already empty --- \n";
            return;
        }
        front = (front + 1) & capacity;
        count--;
    }

    int getFront() {
        if(count == 0) {
            cout << "\n --- the queue is empty --- \n";
            return -1;
        }
        cout <<  "\n  --- Rear ---\n" <<q[front];
        return q[front];
    }

    int getRear() {
        if(count == 0) {
            cout << "\n --- the queue is empty --- \n";
            return -1;
        }

        int index = (rear - 1 + capacity) % 5;
        cout <<  "\n  --- Rear ---\n" <<q[index];
        return q[index];
    }

    bool isFull() {
        if(count == capacity) {
            cout << "\n --- queue is full --- \n";
            return true;
        } else {
            cout << "\n --- queue has space --- \n";
            return false;
        }
    }

    bool isEmpty() {
        if(count == 0) {
            cout << "\n --- queue is empty --- \n";
            return true;
        }
    return false;
    }

    void display_q() {
        if (count == 0) {
            cout << "--- Queue is empty ---" << endl;
            return;
        }

        int index = front;

        for(int i=0; i < count; i++) {
            cout << q[index] << " ";
            index = (index + 1) % capacity;
        }
        cout << endl;

    }
};

#endif