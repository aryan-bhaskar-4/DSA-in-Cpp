#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,5,1,7,4,9,5,7,2,4,2};
    int n = sizeof(arr)/sizeof(int);
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    int freq[100000];

    for(int i=0;i<n;i++){
        minNum = min(arr[i],minNum);
        maxNum = max(arr[i],maxNum);
    }

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=minNum,x=0;i<=maxNum;i++){
        while(freq[i] > 0){
            arr[x++] = i;
            freq[i]--; 
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}