#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &nums,int si,int ei){
    int pivot = nums[ei];
    int i = si-1;

    for(int j=si;j<ei;j++){
        if(nums[j] <= pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }

    
    i++;
    swap(nums[i], nums[ei]);

    return i;
}

void quicksort(vector<int> &nums,int si,int ei){
    if(si >= ei){
        return;
    }

    int pivotidx = partition(nums,si,ei);

    quicksort(nums,si,pivotidx-1);
    quicksort(nums,pivotidx+1,ei);
}

int main(){
    vector<int> nums = {3,2,6,3,7,1,5,9,4,7,3};
    int n = nums.size();

    quicksort(nums,0,n-1);

    for(int i=0;i<n;i++){
        cout << nums[i] << ", ";
    }
    cout << endl;

    return 0;
}