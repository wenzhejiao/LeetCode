#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(begin(nums), end(nums));
        set<float> st;
        for (int i = 0, j = nums.size() - 1; i < j;) {
            st.insert((nums[j]*1.0 + nums[i]*1.0)/2.0f);
            i++; j--;
        }
        return st.size();
    }
};

int main() {
    vector<int> nums = { 9,5,7,8,7,9,8,2,0,7 };
    Solution so;
    cout << so.distinctAverages(nums);
    getchar();
    return 1;
}