#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {2,7,11,15};
    int n = vec.size();
    int target = 13;
    vector<int> ans;

    int st = 0;
    int end = n-1;

    while(st < end){
        int curr = vec[st] + vec[end];
        if(curr == target){
            ans.push_back(st);
            ans.push_back(end);
            break;
        } else if(curr > target){
            end--;
        } else {
            st++;
        }
    }

    cout << "Found at : {" << ans[0] << "," << ans[1] << "}\n";
    return 0;
}