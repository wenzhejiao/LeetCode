#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ret = -1;
        int flag = 0;
        int cnt = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (flag == 0) {
                if (nums[i + 1] - nums[i] == 1) {
                    cnt++;
                    ret = max(ret, cnt);
                    flag = 1;
                }
                else {
                    cnt = 1;
                }

            }
            else if (flag == 1) {
                if (nums[i + 1] - nums[i] == -1) {
                    cnt++;
                    ret = max(ret, cnt);
                    flag = 0;
                }
                else if (nums[i + 1] - nums[i] == 1) {
                    cnt=2;
                    ret = max(ret, cnt);
                    flag = 1;
                }
                else {
                    cnt = 1;
                    flag = 0;
                }

            }
        }
        return ret >= 2 ? ret : -1;
    }
};

void main() {
    vector<int> nums = { 1,2,2,3,2,2,2,3,2 };
    Solution so;
    cout << so.alternatingSubarray(nums) << endl;
    getchar();
}