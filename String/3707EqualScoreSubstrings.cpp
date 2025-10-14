#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool scoreBalance(string s) {
        int total = 0;
        int half = 0;
        for (const auto& ch : s) {
            total += ch - 'a' + 1;
        }

        if (total % 2) return false;
        for (int i = 0; i < s.size(); i++) {
            half += s[i] - 'a' + 1;

            if (half == total / 2) return i + 1;
            if (half > total / 2) break;
        }

        return false;
    }
};