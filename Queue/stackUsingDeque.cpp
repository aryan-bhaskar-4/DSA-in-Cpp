#include<iostream>
#include<deque>
using namespace std;

class Stack {
    deque<int> deq;
public:
    void push(int data){
        deq.push_back(data);
    }

    void pop(){
        deq.pop_back();
    }

    int top(){
        return deq.back();
    }

    bool empty(){
        return deq.empty();
    }
};

int main(){
    Stack s;
    for(int i=1;i<=10;i++){
        s.push(i);
    }

    while(!s.empty()){
        cout << s.top() << ",";
        s.pop();
    }

    cout << endl;
    return 0;
}
