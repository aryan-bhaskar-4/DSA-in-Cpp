#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}
int main(){
    int arr[]= {4,3,7,2,7,4,9,8,1,7,9};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;

    int ans = linearsearch(arr,n,target);
    cout << "Found at : " << ans << endl;

    return 0;
}