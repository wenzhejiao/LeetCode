#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        return k * nums[nums.size() - 1] + (k - 1) * k / 2;
    }
};