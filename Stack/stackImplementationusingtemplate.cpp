#include<iostream>
#include<vector>
#include<string>
using namespace std;
template < class T >
class Stack {
    vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    T top(){
        int n = vec.size() - 1;
        return vec[n];
    }
    bool empty(){
        return vec.size() == 0;
    }
};

int main(){
    Stack<char> s;
    s.push('N');
    s.push('A');
    s.push('Y');
    s.push('R');
    s.push('A');

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    cout << endl;
    return 0;
}