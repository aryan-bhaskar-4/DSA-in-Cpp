#include<iostream>
using namespace std;
class Queue {
    int *arr;
    int capacity;
    int currsize;

    int f,r;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currsize = 0;
        f = 0;
        r = -1;
    }

    void push(int data){
        if(currsize == capacity){
            cout << "Queue is FUll\n";
            return;
        }

        r = (r+1)%capacity;
        arr[r] = data;
        currsize++;
    }

    void pop(){
        if(currsize == 0){
            cout << "Queue is Empty\n";
            return;
        }

        f = (f+1)%capacity;
        currsize--;
    }

    int front(){
        if(currsize == 0){
            cout << "Queue is full\n";
            return 0;
        }

        return arr[f];
    }

    bool empty(){
        return currsize == 0;
    }
};

int main(){
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout << q.front() << ", ";
        q.pop();
    }
    cout << endl;
    return 0;
}