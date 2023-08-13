#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> m;
        int ret = -1;
        int maxFreq = 0;
        for (const auto& n : nums) {
            m[n]++;
            if (n % 2 == 0) {
                if (maxFreq < m[n]) {
                    maxFreq = m[n];
                    ret = n;
                }
                else if (maxFreq == m[n]) {
                    if (n < ret) ret = n;
                }
            }
        }
        return ret;
    }
};