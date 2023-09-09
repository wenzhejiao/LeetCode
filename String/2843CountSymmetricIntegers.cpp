#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        string s = "";
        int ret = 0;
        for (int i = low; i <= high; i++) {
            s = to_string(i);
            if (s.size() % 2 != 0) {
                continue;
            }
            int sum = 0;
            for (int j = 0; j < s.size(); j++) {
                if (j < s.size() / 2) {
                    sum += (s[j] - '0');
                }
                else {
                    sum -= (s[j] - '0');
                }
            }
            if (sum == 0) {
                ret++;
            }
        }
        return ret;
    }
};