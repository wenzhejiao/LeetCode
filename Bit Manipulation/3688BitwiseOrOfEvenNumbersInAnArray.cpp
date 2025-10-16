#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ret = 0;

        for (const auto& n : nums) {
            if (n % 2 == 0) ret = ret | n;
        }
        return ret;
    }
};