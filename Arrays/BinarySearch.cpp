#include<iostream>
using namespace std;
int binarySearch(int arr[], int n,int target){
    int st = 0;
    int end = n-1;
    while(st <= end){
        int mid = st + (end-st)/2;

        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] > target){
            end = mid-1;
        } else {
            st = mid+1;
        }
    }

    return -1;
}
int main(){
    int arr[] = {2,5,7,9,12,14,15,17,23,35};
    int n = sizeof(arr)/sizeof(int);
    int target = 17;

    int ans = binarySearch(arr,n,target);

    cout << "Found at : " << ans << endl;

    return 0;
}