#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string greatestLetter(string s) {
        vector<int> n(52, 0);
        string ret = "";
        for (const auto& ch : s) {
            if (ch <= 'z' && ch >= 'a') n[ch - 'a']++;
            else if(ch >='A') n[ch - 'A' + 26]++;
            
        }

        for (int i = 25; i >= 0; i--) {
            if (n[i] > 0 && n[i + 26] > 0)
            {
                ret = string(1, i + 'A');
                break;
            }
        }
        return ret;
    }
};

int main() {
    string s = "lEeTcOdE";
    Solution so;
    cout << so.greatestLetter(s) << endl;
    getchar();
}