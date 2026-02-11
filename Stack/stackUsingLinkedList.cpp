#include<iostream>
using namespace std;
template <class T>
class Node {
public:
    int data;
    Node* next;

    Node(T val){
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack {
    Node<T>* head;
public:
    Stack(){
        head = NULL;
    }

    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL){
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        if(head == NULL){
            cout << "Empty stack..." << endl;
            return;
        }

        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top(){
        if(head == NULL){
            cout << "Empty stack..." << endl;
            return -1;
        }

        return head->data;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
    Stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){
        cout << s.top() << ",";
        s.pop();
    }
    cout << endl;
    return 0;
}