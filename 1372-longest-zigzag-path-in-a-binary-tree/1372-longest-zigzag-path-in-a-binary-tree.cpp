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
    int df(TreeNode*root,int c1,int c)
    {
        if (!root) return c;
        if (c1) return max(df(root->right,0,c+1),df(root->left,1,0));
        return max(df(root->left,1,c+1),df(root->right,0,0));
    }
    
    int longestZigZag(TreeNode* root) {
        int c=0;
        c=max(df(root->left,1,0),df(root->right,0,0));
        return c;
    }
};