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
        //write your function here
        int arr[2];
        int min = 0;
        int max = 0;
        int avg = 0;

        if(head != nullptr){
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
            temp = temp->next;
        }
        temp = head;
        int c = 0;
        while(temp != nullptr){
            avg += temp->data;
            temp = temp->next;
            c++;
        }
        avg = avg/c;
        arr[0] = min;
        arr[1] = max;
        arr[2] = avg;
    }

        return &(arr[0]);

    }
    

private:
    Node* head = nullptr;
};
