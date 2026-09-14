#include<iostream>
using namespace std;

int main(){
    int decNum = 10;
    int binNum = 0;
    int pow = 1;

    while(decNum > 0){
        int ld = decNum % 2;
        binNum += pow * ld;
        pow *= 10;
        decNum /= 2;
    }

    cout << "Binary Number: " << binNum << endl; 
    return 0;
}