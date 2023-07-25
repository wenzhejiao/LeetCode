#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ret = 0;

        for (int i = mainTank; i > 0;) {
            if (i >= 5) {
                i -= 5;
                if (additionalTank > 0) {
                    i++;
                    additionalTank--;
                }
                ret += 50;
            }
            else {
                ret += i * 10;
                break;
            }
        }
        return ret;
    }
};

void main() {
    int mainTank = 9;
    int additionalTank = 2;
    Solution so;
    cout << so.distanceTraveled(mainTank, additionalTank) << endl;
    getchar();

}