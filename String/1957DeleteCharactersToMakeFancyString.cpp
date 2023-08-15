#include<iostream>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string ret = "";
        int cnt = 1;
        char ch = s[0];
        ret += ch;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == ch) {
                if (cnt < 2) {
                    ret += s[i];
                    cnt++;
                }
            }
            else {
                cnt = 1;
                ch = s[i];
                ret += s[i];
            }
        }

        return ret;
    }
};

int main() {
    Solution so;
    string s = "aaabaaaa";

    cout << so.makeFancyString(s) << endl;
}