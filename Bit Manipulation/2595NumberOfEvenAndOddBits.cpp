#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd = 0, even = 0;
        int i = 1;
        while (n != 0) {
            if (n % 2) {
                if (i % 2) {
                    odd++;
                }
                else {
                    even++;
                }
            }
            i++;
            n /= 2;
        }

        vector<int> ret{ odd, even };
        return ret;

    }
};

void main() {
    int n = 2;
    Solution so;
    vector<int> ret = so.evenOddBit(n);
    getchar();
}