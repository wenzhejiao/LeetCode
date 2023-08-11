#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        bool flag = true;
        int ret = 0;
        for (const auto& ch : s) {
            if (ch == '|' && flag)
                flag = false;
            else if (ch == '|' && !flag)
                flag = true;
            if (flag && ch == '*')
                ret++;
        }
        return ret;
    }
};

int main() {
    string s = "l|*e*et|c**o|*de|";
    Solution so;
    cout << so.countAsterisks(s) << endl;
    getchar();
}