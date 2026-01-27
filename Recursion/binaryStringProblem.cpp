#include<iostream>
#include<string>
using namespace std;
void binstring(int n,int lastPlace,string ans){
    if(n == 0){
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1){
        binstring(n-1,0,ans+'0');
        binstring(n-1,1,ans+'1');
    } else {
        binstring(n-1,0,ans+'0');
    }
}

int main(){
    // Print all binary Strings of size n without any consecutive 1s.
    string ans = "";
    binstring(3,0,ans);
    return 0;
}