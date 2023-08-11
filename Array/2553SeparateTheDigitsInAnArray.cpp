#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ret;
        vector<int> tmp;
        
        for (auto& n : nums) {
            tmp.clear();
            while (n) {
                tmp.push_back(n % 10);
                n /= 10;
            }
            reverse(begin(tmp), end(tmp));
            for (const auto& n : tmp) {
                ret.emplace_back(n);
            }
        }
        return ret;
    }
};

void main()
{
    vector<int> nums={ 13,25,83,77 };
    Solution so;
    vector<int> ret = so.separateDigits(nums);

    getchar();
}