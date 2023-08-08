#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) {
        int len = num.size();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] != '0' && i!= 0) {
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};