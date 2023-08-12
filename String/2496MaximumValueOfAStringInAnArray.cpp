#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ret = 0;
        int num = 0;
        for (const auto& str : strs) {
            num = 0;
            for (const auto& ch : str) {
                if (ch >= 'a' && ch <= 'z') {
                    ret = std::max(ret, static_cast<int>(str.size()));
                    num = 0;
                    break;
                }
                else {
                    num = num * 10 + ch - '0';
                }

            }
            ret = max(ret, num);
        }
        return ret;
    }
};

int main() {
    vector<string> strs = { "kzgy","0qgl3","4","khzv","jtglz","85b","47","jf","8i0a","oy" };
    Solution so;
    cout << so.maximumValue(strs);
    getchar();
}