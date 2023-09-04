#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        if (income == 0) return 0.00000;
        double ret = 0.00000f;
        int i = 0;
        while (income > 0) {
            
            if (i == 0) {
                ret += min(income, brackets[i][0]) * brackets[i][1] / 100.00000;
                income -= brackets[i][0];
            }
            else {
                ret += min(income, brackets[i][0] - brackets[i - 1][0]) * brackets[i][1] / 100.00000;
                income = income - (brackets[i][0] - brackets[i - 1][0]);
            }
                      
            
            i++;
        }
        return ret;
    }
};

void main() {
    vector<vector<int>> brackets = { {3,50}, {7,10}, {12, 25} };
    int income = 10;
    Solution so;
    cout << so.calculateTax(brackets, income);
    getchar();
}