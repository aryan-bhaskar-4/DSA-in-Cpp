#include<iostream>
#include<vector>
using namespace std;
void printSudoku(vector<vector<int>> sudoku){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << sudoku[i][j] << ",";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<int>> sudoku,int row,int col,int digit){
    for(int i=0;i<9;i++){
        if(sudoku[i][col] == digit){
            return false;
        }
    }

    for(int j=0;j<9;j++){
        if(sudoku[row][j] == digit){
            return false;
        }
    }

    int nextrow= (row / 3)*3;
    int nextcol = (col / 3)*3;

    for(int i=nextrow;i<=nextrow+2;i++){
        for(int j=nextcol;j<=nextcol+2;j++){
            if(sudoku[i][j] == digit){
                return false;
            }
        }
    }

    return true;
}

bool sudokusolver(vector<vector<int>> sudoku,int row,int col){
    if(row == 9){
        printSudoku(sudoku);
        return true;
    }
    
    int nextrow = row;
    int nextcol = col+1;
    if(col+1 == 9){
        nextrow = row+1;
        nextcol = 0;
    }

    if(sudoku[row][col] != 0){
        return sudokusolver(sudoku,nextrow,nextcol);
    }

    for(int digit=1;digit<=9;digit++){
        if(isSafe(sudoku,row,col,digit)){
            sudoku[row][col] = digit;
            if(sudokusolver(sudoku,nextrow,nextcol)){
                return true;
            }
            sudoku[row][col] = 0;
        }
    }

    return false;
}
int main(){
    vector<vector<int>> sudoku = {{0,0,8,0,0,0,0,0,0},
                                  {4,9,0,1,5,7,0,0,2},
                                  {0,0,3,0,0,4,1,9,0},
                                  {1,8,5,0,6,0,0,2,0},
                                  {0,0,0,0,2,0,0,6,0},
                                  {9,6,0,4,0,5,3,0,0},
                                  {0,3,0,0,7,2,0,0,4},
                                  {0,4,9,0,3,0,0,5,7},
                                  {8,2,7,0,0,9,0,1,3}};
    sudokusolver(sudoku,0,0);
    return 0;
}