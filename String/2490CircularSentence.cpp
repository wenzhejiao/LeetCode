#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        string word = "";
        for (const auto& ch : sentence) {
            if (ch == ' ') {
                words.emplace_back(word);
                word.clear();
            }
            else {
                word += ch;
            }
        }
        words.emplace_back(word);

        if (words.size() == 1) {
            return words[0][0] == words[0][words[0].size() -1];
        }
        
        if (words[0][0] != words[words.size() - 1][words[words.size() - 1].size() - 1])
            return false;
        for (int i = 0; i < words.size() - 1; i++) {
            if (words[i][words[i].size() - 1] != words[i + 1][0])
                return false;
        }
        return true;
    }
};

void main() {
    string sentence = "eetcode";
    Solution so;
    cout << so.isCircularSentence(sentence);

    getchar();
}