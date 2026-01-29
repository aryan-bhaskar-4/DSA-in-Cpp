#include<iostream>
#include<string>
using namespace std;
void printpermutation(string str,string ans){
    if(str.size() == 0){
        cout << ans << endl;
    }

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string nextstr = str.substr(0,i) + str.substr(i+1,str.size()-i-1);
        printpermutation(nextstr,ans+ch);
    }
}
int main(){
    string str = "abc";
    string ans = "";

    printpermutation(str,ans);
    return 0;
}