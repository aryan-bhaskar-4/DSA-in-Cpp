#include<iostream>
using namespace std;
int sumNum(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return n + sumNum(n-1);
}

int main(){
    int n = 5;
    cout << "Sum : " << sumNum(n) << endl;
    return 0;
}