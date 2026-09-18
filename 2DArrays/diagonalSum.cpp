#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4,m = 4;
    int sum = 0; 

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == j){
                sum += arr[i][j];
            } else if( j == n-i-1){
                sum += arr[i][j];
            }
        }
    }

    cout << "Diagonal Sum : " << sum << endl;
    return 0;
}