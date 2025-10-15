#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int i = 0;
        while (n) {
            if (n % 10) ans.insert(ans.begin(), n % 10 * pow(10, i));
            n /= 10;
            i++;
        }
        return ans;
    }
};