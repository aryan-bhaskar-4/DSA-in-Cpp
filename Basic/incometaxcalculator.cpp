#include<iostream>
using namespace std;

int main(){
    int income, tax;
    cout << "Enter income(in Lakhs) : ";
    cin >> income;

    if(income <= 500000){
        tax = 0;
    } else if(income > 500000 && income <= 1000000){
        tax = income * (20/100);
    } else {
        tax = income * (30/100);
    }

    cout << "Tax : " << (tax * 100000) << endl;
    return 0;
}