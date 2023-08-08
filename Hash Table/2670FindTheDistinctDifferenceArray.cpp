#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ret;
        unordered_map<int, int> map_pre, map_post;
        for (int i = 0; i < nums.size(); i++) {
            map_pre.clear();
            map_post.clear();
            for (int j = 0; j <= i; j++) {
                map_pre[nums[j]]++;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                map_post[nums[j]]++;
            }
            ret.push_back(map_pre.size() - map_post.size());
        }

        return ret;

    }
};