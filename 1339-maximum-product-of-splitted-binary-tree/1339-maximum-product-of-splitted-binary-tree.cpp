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
    long long maxP = 0;
    long long totalS = 0;
    void dfs(TreeNode* root)
    {
        if(!root)
            return;
        dfs(root->left);
        dfs(root->right);
        totalS += (long long)root->val;
    }
    long long calSubTreeSum(TreeNode* root)
    {
        if(!root)
            return 0;
        long long l = calSubTreeSum(root->left);
        long long r = calSubTreeSum(root->right);
        long long SubTreeSum = l + r + root->val;
        maxP = max(maxP, (SubTreeSum)*(totalS - SubTreeSum));
        return SubTreeSum;
    }
    int maxProduct(TreeNode* root) {
        int m = 1000000007;
        dfs(root);
        calSubTreeSum(root);
        return int(maxP%m);
    }
};