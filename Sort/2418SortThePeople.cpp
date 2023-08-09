#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> m;

        for (int i = 0; i < names.size(); i++) {
            m[heights[i]] = names[i];
        }
        vector<string> ret;
        map<int, string>::iterator itr;
        for (itr = m.begin(); itr != m.end(); itr++)
        {
            ret.push_back(itr->second);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};