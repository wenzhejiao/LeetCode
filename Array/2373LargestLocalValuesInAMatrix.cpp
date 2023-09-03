#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int s = grid.size();
        vector<vector<int>> ret;
        for (int i = 0; i < s - 2; i++) {
            vector<int> row(s - 2, 0);
            ret.push_back(row);
        }

        int mx = 0;
        for (int i = 0; i <= s - 3; i++) {
            for (int j = 0; j <= s - 3; j++) {
                mx = 0;
                for (int m = i; m < i+3; m++) {
                    for (int n = j; n < j + 3; n++) {
                        mx = max(mx, grid[m][n]);
                    }
                }
                ret[i][j] = mx;
            }
        }

        return ret;
    }
};