#include<iostream>
using namespace std;

int main(){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4,m = 4;

    int stRow = 0;
    int endRow = n-1;   
    int stCol = 0;
    int endCol = m-1;

    while(stRow <= endRow &&  stCol <= endCol){

        for(int j=stCol;j<=endCol;j++){
            cout << matrix[stRow][j] << ", ";
        }

        for(int j=stRow+1;j<=endRow;j++){
            cout << matrix[j][endCol] << ", ";
        }

        for(int j=endCol-1;j>=stCol;j--){
            cout << matrix[endRow][j] << ", ";
            if(stRow == endCol) break;
        }

        for(int j=endRow-1;j>=stRow+1;j--){
            cout << matrix[j][stCol] << ", ";
            if(stCol == endCol) break;
        }

        stRow++;
        stCol++;
        endCol--;
        endRow--;
    }

    cout << endl;
    return 0;
}