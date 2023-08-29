#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[0] > 0 || nums[nums.size() - 1] < 0)
            return -1;
        for (int i = 0, j = nums.size() - 1; nums[i] < 0 && nums[j] >0;)
        {
            if (abs(nums[i]) == nums[j])
                return nums[j];
            else if (abs(nums[i]) < nums[j])
                j--;
            else
                i++;
        }
        return -1;
    }
};

void main()
{
    vector<int> nums = { -1, 2, 3, -3 };
    Solution so;
    cout << so.findMaxK(nums);
    getchar();
}