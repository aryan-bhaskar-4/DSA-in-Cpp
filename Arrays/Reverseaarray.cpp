#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int st = 0;
    int end = n-1;

    while(st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main(){
    int arr[] = {4,5,7,2,4,7,3,6,2,7,4};
    int n = sizeof(arr)/sizeof(int);

    reverseArray(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}