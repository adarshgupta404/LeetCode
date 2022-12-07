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
    int sum = 0;
    int inorder (TreeNode* root, int l, int h)
    {
        if(root!=NULL)
        {
            inorder(root->left, l, h);
            if(root->val>=l && root->val<=h)
                sum = sum + root->val;
            inorder(root->right, l, h);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        return inorder(root, low, high);
    }
};