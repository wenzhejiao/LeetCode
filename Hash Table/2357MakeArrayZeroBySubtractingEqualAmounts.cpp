#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> set;

        for (auto& n : nums) {
            set.insert(n);
        }
        if (set.count(0)) return set.size() - 1;
        return set.size();
    }
};