#define MY_LL_H
#ifdef MY_LL_H

#include<iostream>
using namespace std;


class My_linkedList {
public:
    struct Node {
        int data;
        Node* next;
        
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
    };
    Node* head;
public: 
    My_linkedList() {
        head = nullptr;
    }

    // insert at the end O(n)
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
            
        if(head == nullptr) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
            
        }
        cout << "Inserted " << value << " at the end" << endl;
    }
    // time complexity O(1);
    void insertBegin(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        // make the head new node 
        head = newNode;
        
    }
    // insert at spefic value
    void insertAfterSpecficvalue(int new_value, int existing_value) {
        Node* newNode = new Node(new_value);
        newNode->next = nullptr;

        Node* curr = head;
        if(head == nullptr) {
            head = newNode;
            cout << "List was empty. Inserted " << new_value << " as first node" << endl;
            return;
        }
        

        while(curr != nullptr && curr->data != existing_value) {
            curr = curr->next;
        }

        if(curr == nullptr) {
            cout << "Value" << existing_value << "Not found insertion failed";
            delete newNode;
        } else {
            newNode->next = curr->next;
            curr->next = newNode;
            cout << "Inserted " << new_value << " after " << existing_value << endl;
        }


    }
    // insert at specfic position 
    void insertSpecificPosition(int value, int position) {
        Node* newNode = new Node(value);
        if(position < 0) {
            cout << "Invalid position: Position should be >= 0";
            return;
        }

        if(position == 0) {
            newNode->next = head;
            head = newNode;
            cout << "Inserted " << value << " at position " << position << endl;
            return;
        }
        Node* curr = head;
        int curr_position = 0;
        // traverse till the correct postion;
        while(curr != nullptr && curr_position < position-1) {
            curr = curr->next;
            curr_position++;
        }
        // position out of range
        if(curr == nullptr) {
            cout << "Position " << position << " out of range. Insertion failed." << endl;
            delete newNode;
            return;
        } 
            newNode->next = curr->next;
            curr->next = newNode;
            cout << "Inserted " << value << " at position " << position << endl;
        


    }
    void searchByIndex(int index) {
        Node* curr = head;
        int posi = 1;
        bool found = false;
        if(head == nullptr) {
            cout << "No list";
            
        }
        
        while(curr != nullptr) {
            if(index == posi) {
                cout << "index is: " << index << " Data is: " << curr->data  << endl;
                found = true;
                return;
                
            }
            curr = curr->next;
            posi++;
        }

        if (!found) {
        cout << "Invalid index" << endl;
    }
    }






    // search an element;
    bool search(int search_val) {
        Node* curr = head;
        
        int position = 0;
        if (head == nullptr) {
            cout << "List is Empty" << endl;
            return false;
        }

        while (curr != nullptr) {
            if( curr->data == search_val) {
                cout << "Yes found the value at: " << position << " value: " << curr->data << endl;
                return true;
                
            }
            curr = curr->next;
            position++;
        }
        cout << "Element " << search_val << " not found in the list" << endl;
        return false;
       
    }

    // delete from begining 
    void deleteFromBegining() {
        if(head == nullptr) {
           cout << "List is empty";
           return;
        }
        Node* curr = head;
        head = head->next;
        int deleteNode = curr->data;
        delete curr;
    }

    // delete from the end 
    void deleteFromEnd() {
        if(head == nullptr) {
            cout << "list is empty"<< endl;
            return;
        }

        if(head -> next == nullptr) {
            int deleteData = head->data;
            delete head;
            head = nullptr;
            cout << "Deleted " << deleteData << " from the end" << endl;
            return;
        }
        Node* curr = head;
        while( curr -> next -> next != nullptr) {
            curr = curr ->next;
        }
        int deletedValue = curr->next->data;
        delete curr->next;
        curr->next = nullptr;

        cout << "Deleted " << deletedValue << " from the end" << endl;

    }

    // Delete node by value
    void deleteByValue(int value) {
        if(head == nullptr) {
            cout << "No element list is empty" << endl;
        }

        Node* curr = head;
        Node* prev = nullptr;
        while(curr != nullptr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        if(curr == nullptr) {
            cout << "Value not found, deletion failed" << endl;
        }

        if(prev == nullptr) {
            head = head->next;
        } else if(curr -> next == nullptr) {
            prev -> next = nullptr;
        } else {
            prev -> next = curr -> next;
        }
        delete curr;
        cout << "Deleted node with value " << value << endl;
    }

    void display() {
        Node* curr = head;

        while (curr != nullptr) {
            cout << curr->data << " -> ";
            curr = curr->next;
        }
    }

    
};

#endif