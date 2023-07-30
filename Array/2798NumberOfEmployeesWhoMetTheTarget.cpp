#include<vector>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ret = 0;
        for (auto& n : hours)
        {
            if (n >= target)
                ret++;
        }
        return ret;
    }
};