#include<iostream>
using namespace std;

int main(){
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);

    int maxprofit = 0;
    int minBuy[n];
    minBuy[0] = prices[0];

    for(int i=1;i<n;i++){
        minBuy[i] = min(minBuy[i-1], prices[i]);
    }

    for(int i=0;i<n;i++){
        prices[i] = prices[i] - minBuy[i];
        if(prices[i] > 0){
            maxprofit = max(maxprofit,prices[i]);
        }
    }

    cout << "Max Profit: " << maxprofit << endl;
    return 0;
}