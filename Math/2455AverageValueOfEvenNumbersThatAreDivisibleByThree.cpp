#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int cnt = 0;
        for (const auto& n : nums) {
            if (n % 3 == 0 && n % 2 == 0) {
                sum += n;
                cnt++;
            }
        }
        if (cnt == 0) return 0;

        return floor(sum / cnt);
    }
};