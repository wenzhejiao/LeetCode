#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ret = 0;

        for (auto str : details) {
            if ((str.at(11)-'0') * 10 + str.at(12)-'0' >= 60)
                ret++;
        }
        return ret;
    }
};