#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        for (const auto& n : nums) {
            for (int i = n[0]; i <= n[1]; i++)
                s.insert(i);
        }
        return s.size();
    }
};