#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ret = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) ret += nums[i];
            else ret -= nums[i];
        }
        return ret;
    }
};