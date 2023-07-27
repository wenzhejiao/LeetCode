#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	int countSegments(string s) {
		int res = 0;
		if (s.empty())
			return 0;
		for (int i = 0; i < s.size()-1; i++) {
			if (isspace(s[i]) == 0 && isspace(s[i + 1]) != 0)
				res++;
		}
		if (isspace(s[s.size() - 1]) == 0)
			res++;
		return res;
	}
};

void main() {
	string s = "";
	Solution so;
	cout << so.countSegments(s) << endl;

	getchar();
}
