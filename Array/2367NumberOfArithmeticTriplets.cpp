#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {

        int len = nums.size();
        int ret = 0;
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j <len; j++) {
                for (int k = j + 1; k < len; k++) {
                    if (nums[i] + diff == nums[j] && nums[j] + diff == nums[k]) ret++;
                }
            }
        }
        return ret;
    }
};

void main() {
    vector<int> nums = { 0,1,4,6,7,10 };
    int diff = 3;
    Solution so;
    cout << so.arithmeticTriplets(nums, diff );
    getchar();
}