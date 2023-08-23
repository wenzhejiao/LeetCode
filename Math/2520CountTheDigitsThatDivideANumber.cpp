#include<iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int ret = 0;

        int tmp = num;
        while (tmp) {
            int div = tmp % 10;
            if (num % div == 0) ret++;
            tmp /= 10;
        }
        return ret;
    }
};