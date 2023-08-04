#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ret;
        ret.push_back(celsius + 273.15000);
        ret.push_back(celsius * 1.80000 + 32.00000);
        return ret;
    }
};