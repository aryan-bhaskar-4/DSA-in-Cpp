#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int si,int mid,int ei){
    vector<int> temp;
    int i = si;
    int j = mid+1;

    while(i <= mid && j <= ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    for(int k=si,x=0;k<=ei;k++){
        arr[k] = temp[x++];
    }

    return;
}
void mergesort(vector<int> &arr,int si,int ei){
    if(si >= ei){
        return;
    }

    int mid = si + (ei-si)/2;

    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}

int main(){
    vector<int> arr = {2,5,3,7,5,1,3,5,7,4,2};
    int n = arr.size();
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;

}