#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {4,5,7,3,6,1,7,4,9,2,4,6,7,9};
    int n = sizeof(arr)/sizeof(int);
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Minimum Number : " << min << endl;
    cout << "Maximum Number : " << max << endl;

    return 0;
}