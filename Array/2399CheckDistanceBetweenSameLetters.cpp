#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> flag(26, 0);
        for (int i = 0; i < s.size(); i++) {
            if (flag[s[i] - 'a'] == 0) {
                flag[s[i] - 'a'] = 1;
                int pos = s[i] - 'a';
                if (i + distance[pos] + 1 >= s.size() || s[i] != s[i + distance[pos] + 1]) return false;
            }
        }
        return true;
    }
};

void main() {
    string s = "zz";
    vector<int> distance = { 10,14,9,10,11,50,11,26,32,13,31,8,18,2,34,10,15,5,20,19,10,20,5,24,22,0 };
    Solution so;
    cout << so.checkDistances(s, distance); 
    getchar();
}