#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int maxsum = 0;


    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            maxsum = max(maxsum,sum);
        }
    }

    cout << "Max Subarray Sum: " << maxsum << endl;

    return 0;
}