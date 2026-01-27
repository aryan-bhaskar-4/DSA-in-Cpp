#include<iostream>
using namespace std;
int fibonacciNum(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fibonacciNum(n-1) + fibonacciNum(n-2);
}
int main(){
    int n = 9;
    cout << fibonacciNum(n) << endl;
    return 0;
}