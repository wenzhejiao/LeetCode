#include<iostream>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        if (time % (n - 1) == 0) {
			if ((time / (n - 1)) % 2 == 1)
			    return n;
			else
				return 1;
        }
        else {
			if ((time / (n - 1)) % 2 == 0)
			    return 1 + time % (n - 1);
			else
				return n - time % (n - 1);
        }

    }
};

void main() {
    int n = 18, time = 38;
    Solution so;
    cout << so.passThePillow(n, time) << endl;
    getchar();

}