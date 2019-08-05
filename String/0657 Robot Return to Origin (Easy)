#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
	bool judgeCircle(string moves) {
		int cnt = 0;
		int cnt2 = 0;
		for (auto& ch : moves) {
			switch (ch) {
			case 'U':
				cnt++;
				break;
			case 'D':
				cnt--;
				break;
			case 'L':
				cnt2--;
				break;
			case 'R':
				cnt2++;
				break;
			default:
				break;
			}
		}
		return cnt == 0 && cnt2 == 0;
	}
};

void main() {
	string s = "UD";
	Solution so;

	cout << so.judgeCircle(s) << endl;
	getchar();
}
