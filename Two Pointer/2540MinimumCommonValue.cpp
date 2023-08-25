#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0, j = 0; i < nums1.size(), j < nums2.size();) {
            if (i == nums1.size() || j == nums2.size()) break;
            if (nums1[i] == nums2[j]) return nums1[i];
            else if (nums1[i] < nums2[j]) i++;
            else j++;
        }
        return -1;
    }
};