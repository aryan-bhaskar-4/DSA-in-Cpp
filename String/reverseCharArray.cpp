#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[] = "code";
    int n = strlen(word);

    int st = 0;
    int end = n-1;

    while(st < end){
        swap(word[st],word[end]);
        st++;
        end--;
    }

    for(char ch : word){
        cout << ch;
    }

    cout << endl;
    return 0;
}