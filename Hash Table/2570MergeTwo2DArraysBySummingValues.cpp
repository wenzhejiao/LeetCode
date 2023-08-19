#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> m;
        for (const auto& item : nums1) {
            m[item[0]] = item[1];
        }
        for (const auto& item : nums2) {
            m[item[0]] += item[1];
        }

        vector<vector<int>> ret;
        vector<int> item;
        for (auto iter = m.begin(); iter != m.end(); ++iter) {
            item.push_back(iter->first);
            item.push_back(iter->second);
            ret.push_back(item);
            item.clear();
        }
        return ret;
    }
};