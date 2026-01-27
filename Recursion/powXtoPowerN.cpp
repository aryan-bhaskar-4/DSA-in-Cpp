#include<iostream>
using namespace std;

int pow(int x,int n){
    if(n == 0){
        return 1;
    }

    int halfpow = pow(x,n/2);
    int halfpowsq = halfpow * halfpow;

    if(n % 2 != 0){
        return halfpowsq * x;
    }
    return halfpowsq;
}

int main(){
    int x = 2;
    int n = 10;
    cout << pow(x,n) << endl;
    return 0;
}