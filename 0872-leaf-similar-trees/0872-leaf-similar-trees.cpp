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
    void getleaves(TreeNode* root, vector<int>& v)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            v.push_back(root->val);
        getleaves(root->left, v);
        getleaves(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l, r;
        getleaves(root1, l);
        getleaves(root2, r);
        return l==r;
    }
};