#include<iostream>
using namespace std;

class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int ret = 0;
        if(purchaseAmount %10 < 5 && purchaseAmount % 10 > 0) 
            return (100 - purchaseAmount) / 10 * 10 + 10;
        else
            return (100 - purchaseAmount) / 10 * 10;
            
    }
};