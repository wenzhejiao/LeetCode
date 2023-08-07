#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string ret = "";
        for (const auto& ch : s) {
            if (ch != 'i') ret += ch;
            else {
                reverse(ret.begin(), ret.end());
            }
        }

        return ret;
    }
};

void main() {
    string s = "string";
    Solution so;
    cout << so.finalString(s) << endl;
    getchar();
}