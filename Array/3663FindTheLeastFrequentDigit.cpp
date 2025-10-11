#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> cnt(10, 0);
        int min = 9, index = 0;
        while (n) {
            cnt.at(n % 10)++;
            n = n / 10;
        }

        for (int i = 0; i < 10; i++) {
            if (cnt[i] > 0 && cnt[i] < min)
                min = cnt[i], index = i;
        }
        return index;
    }
};

void main() {
    int n = 1553322;

    Solution so;
    cout << so.getLeastFrequentDigit(n) << endl;
    getchar();
}