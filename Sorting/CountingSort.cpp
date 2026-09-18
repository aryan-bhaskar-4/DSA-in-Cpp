#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {2,6,4,8,4,8,1,9,12,7,4};
    int n = sizeof(arr)/sizeof(int);
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    int freq[100000];

    for(int i=0;i<n;i++){
        minNum = min(minNum, arr[i]);
        maxNum = max(maxNum, arr[i]);
    }

    
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=minNum, x=0;i<=maxNum;i++){
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