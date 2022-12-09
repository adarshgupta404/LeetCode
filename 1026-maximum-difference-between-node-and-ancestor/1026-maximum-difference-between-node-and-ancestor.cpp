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
    int helper(TreeNode* root, int currmin, int currmax)
    {
        if(!root)
            return currmax-currmin;
        
        currmin = min(root->val, currmin);
        currmax = max(root->val, currmax);
        
        int left = helper(root->left, currmin, currmax);
        int right = helper(root->right, currmin, currmax);
        return max(left, right);
    }
    int maxAncestorDiff(TreeNode* root) {
        return helper(root, root->val, root->val);
    }
};