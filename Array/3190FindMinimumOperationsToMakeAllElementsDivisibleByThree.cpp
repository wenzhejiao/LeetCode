#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;

        for (const auto& n : nums) {
            if (n % 3 ) {
                res += 1;
            }
        }
        return res;
    }
};