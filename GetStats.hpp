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
    if(head != nullptr){
        int* min = new int(head->data);
        int* max = new int(head->data);
        int* avg = new int(0);
        
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
        *avg = *avg/c;
        // int* min1 = new int(min);
        // int* max1 = new int(max);
        // int* avg1 = new int(avg);
        int* arr[3] = {min, max, avg};
        delete min;
        delete max;
        delete avg;
        return arr[0];
    }
        return nullptr;

    }

    

private:
    Node* head = nullptr;
};
