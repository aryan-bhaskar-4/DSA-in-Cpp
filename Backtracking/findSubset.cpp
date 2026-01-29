#include<iostream>
#include<string>
using namespace std;
void findSubset(string str,string subset){
    if(str.size() == 0){
        cout << subset << endl;
        return;
    }

    //yes choice
    findSubset(str.substr(1,str.size()-1),subset+str[0]);

    //no choice
    findSubset(str.substr(1,str.size()-1),subset);
}
int main(){
    string str = "abc";
    string subset = "";
    findSubset(str,subset);
    return 0;
}