#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<n;i++){
        fact *= i;
    }
    return fact;
}

int coefficient(int n,int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nsubr = factorial(n-r);

    int total = nfact / (rfact * nsubr);
    return total;
}
int main(){
    cout << coefficient(4,2);
    return 0;
}