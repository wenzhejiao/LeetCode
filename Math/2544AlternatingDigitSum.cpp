#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        int ret = 0;
        int flag = 1;
        vector<int> digit;
        while (n) {
            digit.push_back(n % 10);
            n /= 10;
        }
        for (int i = digit.size() - 1; i >= 0; i--) {
            ret += digit[i] * flag;
            flag *= -1;
        }

        return ret;
    }
};