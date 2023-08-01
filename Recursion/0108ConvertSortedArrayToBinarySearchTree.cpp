#include<iostream>
#include<vector>
using namespace std;
 
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return NULL;
        if (nums.size() == 1) return new TreeNode(nums[0]);

        int mid_ind = nums.size() / 2;

        TreeNode* root = new TreeNode(nums[mid_ind]);
        

		vector<int> left_arr = { nums.begin(), nums.begin() + mid_ind };
		
		vector<int> right_arr = { nums.begin() + mid_ind + 1, nums.end() };
        root->left = sortedArrayToBST(left_arr);
		root->right = sortedArrayToBST(right_arr);

        return root;
    }
};

void main() {
    vector<int> nums{ -10,-3,0,5,9 };
    Solution so;
    TreeNode* root = so.sortedArrayToBST(nums);
    getchar();
}