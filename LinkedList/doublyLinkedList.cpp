#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = prev = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void printll(){
        Node* temp = head;
        
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List dbll;

    dbll.push_front(7);
    dbll.push_front(6);
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.printll();

    dbll.pop_front();

    dbll.printll();

    return 0;
}