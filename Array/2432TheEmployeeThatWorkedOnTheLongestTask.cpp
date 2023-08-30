#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ret_id = -1;
        int max_unit = 0;
        int last_end = 0;
        for (const auto& log : logs) {
            if (max_unit < log[1] - last_end) {
                max_unit = log[1] - last_end;
                ret_id = log[0];
            }
            else if (max_unit == log[1] - last_end) {
                ret_id = min(ret_id, log[0]);
            }
            last_end = log[1];
        }
        return ret_id;
    }
};