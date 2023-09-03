#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& g : grid) {
            sort(begin(g), end(g));
        }

        int ret = 0;
        int max_val = INT32_MIN;
        for (int i = 0; i < grid[0].size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                max_val = max(max_val, grid[j][i]);
            }
            ret += max_val;
            max_val = INT32_MIN;
        }
        
        return ret;
    }
};

void main() {
    vector<vector<int>> grid = { {1,2,4},{3,3,1} };
    Solution so;
    cout << so.deleteGreatestValue(grid);
    getchar();
}