#include<iostream>
#include"QT/cir.h"

using namespace std;

int main() {
    My_circular_queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(5);
    

    q.display_q();

    q.getFront();
    q.getRear();
    q.isFull();
    

   
}