#include<iostream>
using namespace std;

int main(){
    int binNum = 1011;
    int decNum = 0;
    int pow = 1;

    while(binNum > 0){
        int ld = binNum % 10;
        decNum += pow * ld;
        pow *= 2;
        binNum /= 10;
    }

    cout << "Decimal Number : " << decNum << endl;
    return 0;
}