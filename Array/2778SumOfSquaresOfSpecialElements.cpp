#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ret = 0;
        int n = nums.size();

        for (int i = 1; i <= n; i++) {
            if (n % n == 0) {
                ret += nums[i - 1] * nums[i - 1];
            }
        }
        return ret;
    }
};