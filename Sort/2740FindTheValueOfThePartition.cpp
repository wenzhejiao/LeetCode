#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ret = INT32_MAX;
        for (int i = 0; i < nums.size() - 1; i++) {
            ret = min(ret, abs(nums[i] - nums[i + 1]));
        }
        return ret;
    }
};