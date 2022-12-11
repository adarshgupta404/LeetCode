/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxsum = INT_MIN;
    int max_sum(TreeNode* root)
    {
        if(!root)
            return 0;
        int l = max(max_sum(root->left), 0);
        int r = max(max_sum(root->right), 0);
        int newsum = root->val + l + r;
        maxsum = max(maxsum, newsum);
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        max_sum(root);
        return maxsum;
    }
};