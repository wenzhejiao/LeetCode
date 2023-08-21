#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string cat = "";
        for (const auto& w : words) {
            cat += w[0];
        }
        return cat == s;
    }
};