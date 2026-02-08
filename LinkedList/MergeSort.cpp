#include<iostream>
// #include<list>
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

};

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev!=NULL){
        prev->next = NULL;
    }

    return slow;
}

Node* merge(Node* left,Node* right){
    List ans;
    Node* i = left;
    Node* j = right;

    while(i != NULL && j != NULL){
        if(i->data >= j->data){
            ans.push_back(j->data);
            j = j->next;
        } else {
            ans.push_back(i->data);
            i = i->next;
        }
    }

    while(i != NULL){
        ans.push_back(i->data);
        i = i->next;
    }

    while(j != NULL){
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;

}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* rightHead = splitAtMid(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left,right);  
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(3);
    ll.push_back(8);
    ll.push_back(5);
    ll.push_back(9);
    ll.push_back(2);
    ll.push_back(7);
    ll.push_back(5);
    ll.push_back(7);

    ll.printll();

    ll.head = mergeSort(ll.head);
    
    ll.printll();

    return 0;
}