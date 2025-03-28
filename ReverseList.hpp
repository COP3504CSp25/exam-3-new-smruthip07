#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        // implement your function here!
        LinkedList l;
        Node* temp = head;
        
        if(temp == nullptr){
            return l;
        }

        while(temp!=nullptr){
            l.addHead(temp->data);
            temp = temp->next;
        }
        
        return l;
        
    }

    Node* head = nullptr;
};
