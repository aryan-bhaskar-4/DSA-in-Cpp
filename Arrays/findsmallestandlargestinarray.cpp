#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {4,5,7,3,6,1,7,4,9,2,4,6,7,9};
    int n = sizeof(arr)/sizeof(int);
    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }

        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }

    cout << "MAX Num: " << maxNum << endl;
    cout << "MIN Num: " << minNum << endl;
    return 0;
}
