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

    void reverse(){
        Node* curr = head;
        Node* prev = NULL;
        tail = head;

        while(curr!=NULL){
            Node* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void removenth(int n){
        Node* prev = head;
        int sz = getSize();

        for(int i=1;i<sz-n;i++){
            prev = prev->next; 
        }

        prev->next = prev->next->next; 
    }

    int getSize(){
        Node* temp = head;
        int size = 0;

        while(temp != NULL){
            temp = temp->next;
            size++;
        }

        return size;
    }

    bool isCycle(){
        Node* slow = head;
        Node* fast = head;
        
        slow = slow->next;
        fast = fast->next->next;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "Cycle Exists..." << endl;
                return true;
            }

        }

        cout << "Cycle doesn't Exists...." << endl;
        return false;

    }

    void removecycle(){
        Node* slow = head;
        Node* fast = head;
        bool iscycle = false;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                iscycle = true;
                break;
            }
        }

        if(!iscycle){
            cout << "Cycle not exists..." << endl;
            return;
        }

        slow = head;
        if(fast == slow){
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = NULL;
        } else {
            Node* prev = fast;
            while(slow != fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }   
            prev->next = NULL;
        }
    }

};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(9);

    ll.printll();

    ll.reverse();

    ll.printll();

    ll.removenth(3);

    ll.printll();

    ll.isCycle();

    ll.removecycle();

    return 0;
}