#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string digitSum(string s, int k) {
        int sum = 0;
        int i = 0;
        string tmp = "";
        if (s.size() <= k) return s;
        for (const auto& ch : s) {
            sum += ch - '0';
            i++;
            if (i == k) {
                
                tmp += convertNum(sum);
                i = 0;
                sum = 0;
            }
        }
        if(i != 0) tmp += convertNum(sum);

        return digitSum(tmp, k);
    }

    string convertNum(int number) {
        string ret = "";
        if (number == 0) ret += '0';
        else {
            while (number) {
                ret.insert(0, 1, number % 10 + '0');
                number /= 10;
            }
        }

        return ret;
    }
};

void main() {
    string s = "1234";
    int k = 2;
    Solution so;
    cout << so.digitSum(s, k);
    getchar();
}