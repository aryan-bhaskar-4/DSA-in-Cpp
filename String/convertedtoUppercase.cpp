#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char str[] = "apPle";
    int n = strlen(str);

    for(int i=0;i<n;i++){
        if(str[i] >= 'A' && str[i] <= 'Z') continue;

        str[i] = str[i] - 'a' + 'A';
    }

    for(char ch : str){
        cout << ch;
    }
    cout << endl;
    return 0;
}