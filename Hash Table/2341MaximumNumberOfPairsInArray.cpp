#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (const auto& n : nums) {
            mp[n]++;
        }

        int cnt = 0;
        int left_over = 0;
        vector<int> ret(2, 0);
        for (auto it = mp.begin(); it != mp.end(); it++) {
            cnt += it->second / 2;
            if (it->second % 2) left_over++;
        }
        ret[0] = cnt;
        ret[1] = left_over;
        return ret;
    }
};