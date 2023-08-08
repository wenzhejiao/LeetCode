#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        bool flag = true;
        for (int i = 0; i < words.size() - 1; i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[i].size() == words[j].size()) {
                    flag = true;
                    for (int k = 0; k < words[i].size(); k++) {
                        if (words[i][k] != words[j][words[i].size() - 1 - k])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};