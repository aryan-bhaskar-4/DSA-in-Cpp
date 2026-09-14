#include<iostream>
using namespace std;

int main(){
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    int leftMax[n];
    leftMax[0] = height[0];
    int watertrapped = 0;

    int rightMax[n];
    rightMax[n-1] = height[n-1];

    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],height[i]);
    }

    for(int i=n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],height[i]);  
    }

    for(int i=0;i<n;i++){
        leftMax[i] = min(leftMax[i] , rightMax[i]);
        height[i] = leftMax[i] - height[i];

        if(height[i] > 0){
            watertrapped += height[i];
        }
    }

    cout << "Water Trapped: " << watertrapped << endl;
    return 0;
}