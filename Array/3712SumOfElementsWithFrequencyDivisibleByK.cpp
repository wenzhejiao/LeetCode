#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ret = 0;
        for (const auto& n : nums) {
            mp[n]++;
        }

        for (auto it = mp.cbegin(); it != mp.cend(); it++) {
            if (it->second % k == 0) {
                ret += it->first * it->second;
            }
        }

        return ret;
    }
};