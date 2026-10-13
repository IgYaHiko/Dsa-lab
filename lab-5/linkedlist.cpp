#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    
    // contructor
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class LL {
public:
    Node* head;
    
    // constructor
    LL() {
        head = nullptr;
    }

    void insertBegin(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }


    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if(head == nullptr) {
            head = newNode;
        } else {
            Node* curr = head;
            while(curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
            newNode->next = nullptr;

        }
    }

    void deleteAtBegin() {
        if(head == nullptr) {
            return;
        }

        Node* curr = head;
        head = head->next;
        delete curr;
    }

    void deleteAtEnd() {
        if(head == nullptr) {
            return;
        }
        Node* curr = head;

        while(curr->next->next != nullptr) {
            curr = curr->next;
        }
        curr->next = nullptr;

    }

    void deleteByValue(int val) {
        if(head == nullptr) {
            cout << "Linkedlist is already null ";
            return;
        }
        Node* curr = head;
        Node* prev = nullptr;

        while(curr->next != nullptr && curr->val == val) {
            prev = curr;
            curr = curr->next;
        }

        if(curr == nullptr) {
            cout << "given value not found";
        } 
        
        if(prev == nullptr) {
            head = head->next;
        }else if(curr->next == nullptr) {
            prev->next = nullptr;
        } else {
            prev->next = curr->next;
           
        }
         delete curr;
    

    }

    bool searchByValue(int val) {
        Node* curr = head;
        int posi = 0;
        while(curr != nullptr) {
            if(curr->val == val) {
                cout << "\n Find Value at: " << posi << " Value " << curr->val << endl;
                return true;
            }
            curr = curr->next;
            posi++;
        }
        return false;
    }
    void display() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->val << " -> ";
            curr = curr->next;
        }
        cout << "nullptr";
    }
};

int main() {
    LL ll;
    ll.insertEnd(10);
    ll.insertEnd(20);
    ll.insertEnd(30);
    ll.insertEnd(40);
    ll.insertEnd(50);
    ll.insertEnd(60);

   
    ll.deleteByValue(40);
    ll.searchByValue(10);

    ll.display();
    return 0;

}