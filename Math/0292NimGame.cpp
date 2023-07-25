#include<iostream>
using namespace std;

class Solution {
public:
  bool canWinNim(int n) {
		return n % 4 == 0 ? false : true;
	}
};

void main() {
	int n = 4;
	Solution so;
	cout << so.canWinNim(n) << endl;

	getchar();
}
