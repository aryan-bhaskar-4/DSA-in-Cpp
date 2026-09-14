// Kadane's Algorithm
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int maxsum = 0;
    int currsum = 0;


    for(int i=0;i<n;i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);

        if(currsum < 0){
            currsum = 0;
        }
    }

    cout << "Max Subarray Sum: " << maxsum << endl;

    return 0;
}