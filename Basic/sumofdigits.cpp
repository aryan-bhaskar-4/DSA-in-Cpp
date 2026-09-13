#include<iostream>
using namespace std;

int main(){
    int n = 10829;
    int sum = 0;

    while(n > 0){
        int ld = n%10;
        sum += ld;
        n /= 10;
    }

    cout << "Sum of digits : " << sum << endl;
    return 0;
}