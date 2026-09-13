#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout << "Enter first num: ";
    cin >> n1;
    cout << "Enter second num: ";
    cin >> n2;
    cout << "Enter third num: ";
    cin >> n3;

    if(n1 < n2 && n1 < n3){
        cout << n1 << " is greater" << endl;
    } else if(n2 > n3){
        cout << n2 << " is greater" << endl;
    } else {
        cout << n3 << " is greater" << endl;
    }

    return 0;
}