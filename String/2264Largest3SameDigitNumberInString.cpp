#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    string largestGoodInteger(string num) {

        if (num.size() <= 2) return "";

        string ret = "";
        char ch = num[0];
        string tmp = "";
        tmp += ch;
        for (int i = 1; i < num.size(); i++) {
            if (num[i] == ch) {
                tmp += num[i];
            }
            else {
                ch = num[i];
                if (tmp.size() >= 3) {
                    if (ret.size() == 0 || ret[0] < tmp[0]) {
                        ret = tmp.substr(0, 3);
                    }
                }
                tmp.clear();
                tmp += ch;
            }
        }
        if (tmp.size() >= 3) {
            if (ret.size() == 0 || ret[0] < tmp[0]) {
                ret = tmp.substr(0, 3);
            }
        }
        return ret;
    }
};

int main() {
    string num = "222";
    Solution so;
    cout << so.largestGoodInteger(num) << endl;
    getchar();
}