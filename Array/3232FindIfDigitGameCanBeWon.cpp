#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum_odd = 0, sum_even = 0;

        for (auto n : nums) {
            if (n < 10) sum_odd += n;
            else sum_even += n;
        }
        return sum_odd != sum_even;
    }
};