#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    bool empty(){
        return head == NULL;
    }

    void pop_back(){
        if(empty()){
            cout << "Empty List....." << endl;
            return;
        }

        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void pop_front(){
        if(empty()){
            cout << "Empty List...." << endl;
        }
        
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    void insert(int val,int pos){
        Node* newNode = new Node(val);
        
        Node* temp = head;

        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){
    List ll;

    ll.push_back(2);
    ll.push_back(3);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);

    ll.printll();

    ll.pop_back();
    ll.pop_front();

    ll.printll();
    return 0;
}