#include<iostream>
#include<unordered_map>;
#include<string>

using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> map;
        for (const auto& ch : s) {
            if (map[ch] == 1)
                return ch;
            map[ch]++;
        }
    }
};