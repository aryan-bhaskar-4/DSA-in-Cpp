#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,6,4,8,4,8,1,9,12,7,4};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        int minidx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}