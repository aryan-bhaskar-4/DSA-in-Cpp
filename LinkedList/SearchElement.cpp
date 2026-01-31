#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next = NULL;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

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

    void pop_back(){
        if(head == NULL){
            cout << "Empty List....." << endl;
        }

        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printll(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int iterativeSearch(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }

        return -1;
    }

    int helper(Node* temp,int key){
        if(temp == NULL){
            return -1;
        }
        if(temp->data == key){
            return 0;
        } 
        
        int idx = helper(temp->next, key);
        
        if(idx == -1){
            return -1;
        }

        return idx+1;
        
    }

    int RecSearch(int key){
        return helper(head, key);
    }

};

int main(){
    List ll;
    ll.push_back(2);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(7);
    ll.push_back(9);
    ll.push_back(5);

    cout << ll.iterativeSearch(7) << endl;
    cout << ll.RecSearch(7) << endl;

    return 0;
}