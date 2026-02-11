#include<iostream>
#include<vector>
using namespace std;
class Stack {
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    int top(){
        int n = vec.size();
        return vec[n-1];
    }
    bool empty(){
        return vec.size() == 0;
    }

};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty()){
        cout << s.top() << ",";
        s.pop();
    }
    cout << endl;
    return 0;
}