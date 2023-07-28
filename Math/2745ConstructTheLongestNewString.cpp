#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int longestString(int x, int y, int z) {
        return x != y ? 2 * min(x, y) * 2 + 2 + 2 * z : 2 * min(x, y) * 2 + 2 * z;
    }
};