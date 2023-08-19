#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum_elem = 0, sum_digit = 0;

        for (auto& n : nums) {
            sum_elem += n;
            while (n) {
                sum_digit += n % 10;
                n = n/10;
            }
        }

        return abs(sum_elem - sum_digit);
    }
};