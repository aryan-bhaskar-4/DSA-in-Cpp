#include<iostream>
using namespace std;
int main(){
    string s = "1.1.1.1";
    string ans;

    for(int i=0;i<s.size();i++){
        if(s[i] == '.'){
            ans += "[.]";
        } else {
            ans += s[i];
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    cout << endl;
    return 0;
}