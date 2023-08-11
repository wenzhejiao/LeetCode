#include<iostream>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;

        for (int i = 1; i <= n; i++)
            total += i;

        int pre_sum = 0;
        for (int i = 1; i <= n; i++) {
            pre_sum += i;
            if (pre_sum * 2 == total + i)
                return i;
        }
        return -1;
    }
};