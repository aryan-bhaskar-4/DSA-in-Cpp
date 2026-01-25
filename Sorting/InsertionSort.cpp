#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,3,8,1,9,11,3,5,8,9};
    int n = sizeof(arr)/sizeof(int);

    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;

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