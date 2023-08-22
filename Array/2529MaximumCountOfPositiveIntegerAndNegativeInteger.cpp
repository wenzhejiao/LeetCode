#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n_neg = 0, n_pos = 0;
        for (const auto& n : nums) {
            if (n < 0) n_neg++;
            if (n > 0) n_pos++;
        }
        return max(n_neg, n_pos);
    }
};