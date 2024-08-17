#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

class Solution {
public:
	int winningPlayerCount(int n, vector<vector<int>>& pick) {
		unordered_map<int, unordered_map<int, int>> m;
		unordered_set<int> s;
		int res = 0;
		for (const auto& p : pick)
		{
			if (s.find(p[0]) == s.end())
			{
				m[p[0]][p[1]]++;
				if (m[p[0]][p[1]] > p[0])
				{
					res++;
					s.insert(p[0]);
				}
			}
		}
		return res;
	}
};

void main()
{
	vector<vector<int>> pick = { {0, 0},{1, 0},{1, 0},{2, 1},{2, 1},{2, 0} };

	Solution so;
	int n = 4;
	so.winningPlayerCount(n, pick);
	return;

}
