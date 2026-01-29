#include<iostream>
using namespace std;
int gridways(int r,int c,int n,int m){
    if(r == n-1 && c == m-1){
        return 1;
    }

    if(r == n || c == m){
        return 0;
    }

    int val1 = gridways(r+1,c,n,m);
    int val2 = gridways(r,c+1,n,m);

    return val1 + val2;
}

int main(){
    int n=3;
    int m=3;
    cout << gridways(0,0,n,m) << endl;
    return 0;
}