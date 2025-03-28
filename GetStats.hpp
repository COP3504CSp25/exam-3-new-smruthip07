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

    int* getStats() const{
        //write your function here!
        int* arr[2];
        int min = 0;
        int max = 0;
        int avg = 0;
        Node* temp = head;

        while(temp != nullptr){
            if(temp->data < min){
                min = temp->data;
            }
            temp = temp->next;
        }
        temp = head;

        while(temp != nullptr){
            if(temp->data > max){
                max = temp->data;
            }
            temp = temp->next
        }
        temp = head;

        while(temp != nullptr){
            avg += temp->data;
        }

        arr[0] = &min;
        arr[1] = &max;
        arr[2] = &avg;

        return &min;

    }
    

private:
    Node* head = nullptr;
};
