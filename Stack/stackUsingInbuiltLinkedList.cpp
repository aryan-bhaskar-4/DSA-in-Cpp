#include<iostream>
#include<list>
using namespace std;

template<class T>
class Stack{
    list<T> ll;
public:
    void push(T val){
        ll.push_back(val);
    }
    void pop(){
        ll.pop_back();
    }
    T top(){
        return ll.back();
    }
    bool empty(){
        return ll.size() == 0;
    }
};

int main(){
    Stack<int> s;
    s.push(5);
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