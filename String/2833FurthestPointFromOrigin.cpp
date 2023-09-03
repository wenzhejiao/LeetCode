#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int nL = 0, nR = 0, nS = 0;
        for (const auto& ch : moves) {
            if (ch == 'L') nL++;
            else if (ch == 'R') nR++;
            else nS++;
        }

        return max(nL, nR) - min(nL, nR) + nS;
    }
};