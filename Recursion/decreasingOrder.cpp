#include<iostream>
using namespace std;
void decOrder(int n){
    if(n == 0){
        return;
    }
    
    cout << n << ", ";

    return decOrder(n-1);
}
int main(){
    int n = 5;
    decOrder(n);
    return 0;
}