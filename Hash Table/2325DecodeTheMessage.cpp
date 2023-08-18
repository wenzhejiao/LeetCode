#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        string ret = "";
        unordered_map<char, char> m;
        unordered_map<char, int> m_key;
        int i = 0;
        for (const auto& ch : key) {
            if (ch != ' ' && m_key[ch]==0) {
                m[ch] = i + 'a';
                m_key[ch]++;
                i++;
                if (i == 26) break;
            }
        }

        for (const auto& ch : message) {
            if (ch == ' ') ret += ' ';
            else {
                ret += m[ch];
            }     
        }

        return ret;
    }
};

void main() {
    string key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
    Solution so;
    cout << so.decodeMessage(key, message) << endl;
    getchar();
}