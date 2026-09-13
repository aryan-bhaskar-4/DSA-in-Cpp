#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout << "Sum of N natural number : " << sum << endl;
    return 0;
}