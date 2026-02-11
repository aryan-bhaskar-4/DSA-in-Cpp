#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverseString(string str){
    string ans = "";
    stack<char> s;

    int n = str.size();
    for(int i=0;i<n;i++){
        char ch = str[i];
        s.push(ch);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }

    return ans;
}

int main(){
    string str = "abcdefg";
    cout << "Reverse String : " << reverseString(str) << endl;
    return 0;
}
