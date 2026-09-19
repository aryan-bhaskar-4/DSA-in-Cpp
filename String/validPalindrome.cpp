#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = "apple";
    int n = strlen(str);
    bool isPalindeorme = true;

    int st = 0;
    int end = n-1;
    while(st < end){
        if(str[st] != str[end]){
            isPalindeorme = false;
            break;
        }
        st++;
        end--;
    }

    if(isPalindeorme){
        cout << "Palindrome....." << endl;
    } else {
        cout << "Not Palindrome..........." << endl;
    }

    return 0;
}