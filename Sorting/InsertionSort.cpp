#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,6,4,8,4,8,1,9,12,7,4};
    int n = sizeof(arr)/sizeof(int);

    for(int i=1;i<n;i++){
        int prev = i-1;
        int curr = arr[i];

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}