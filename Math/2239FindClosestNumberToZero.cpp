#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ret = 0;
        int min_dis = INT_MAX;
        for (const auto& n : nums) {
            if (abs(n) < min_dis) {
                ret = n;
                min_dis = abs(n);
            }
            else if (abs(n) == min_dis && n > ret) {
                ret = n;
            }
                
        }
        return ret;
    }
};

void main() {
    vector<int> nums = { -4,-2,1,4,8 };
    Solution so;
    cout << so.findClosestNumber(nums);
    getchar();
}