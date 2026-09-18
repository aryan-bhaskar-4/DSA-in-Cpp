#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n = 4,m = 4;
    int key = 33;

    int i=0;
    int j=m-1;

    while(i < n && j >= 0){
        if(arr[i][j] == key){
            cout << "Key found at : {" << i << "," << j << "}" << endl;
            break;
        } else if(arr[i][j] < key){
            i++;
        } else {
            j--;
        }
    }

    return 0;
}