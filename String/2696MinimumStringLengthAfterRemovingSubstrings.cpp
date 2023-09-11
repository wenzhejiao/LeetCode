#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        string res = "";
        
        auto start_pos = s.find("AB");
        
        if (start_pos != std::string::npos) {
            s.erase(start_pos,2);
            return minLength(s);
        }
        else {
            start_pos = s.find("CD");
            if (start_pos != std::string::npos) {
                s.erase(start_pos, 2);
                return minLength(s);
            }
            else
                return s.length();
        }
        return 0;
    }
};

void main()
{
    string s = "ABFCACDB";
    Solution so;
    cout << so.minLength(s);
    getchar();
}