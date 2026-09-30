#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s = "is2 sentence4 This1 a3";
    int n = s.size();

    vector<string> ans(10);
    string temp;
    int count = 0;
    for(int i=0;i<n;i++){
       
       if(s[i] != ' '){
        temp += s[i];
       } else {
        int t = temp[temp.size()-1]-'0'; //(int)s[i-1]
        temp.pop_back();
        ans[t] = temp;
        temp.clear();
        count++; // temp = "";
       }
    }

    int t = temp[temp.size()-1]-'0'; //(int)s[i-1]
    temp.pop_back();
    ans[t] = temp;
    temp.clear();
    count++;


    for(int i=0;i<=count;i++){
        temp += ans[i];
        temp += " ";
    }
    temp.pop_back();

    cout << "After Sorting: " << temp << endl;


}