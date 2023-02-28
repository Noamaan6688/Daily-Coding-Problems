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
    bool df(TreeNode*root,long m,long n)
    {
        if (root==NULL) return 1;
        if (root->val<n && root->val>m)
        {
            bool t1=df(root->left,m,root->val);
            bool t2=df(root->right,root->val,n);
            return t1 and t2;
        }
        return 0;
    }
    
    bool isValidBST(TreeNode* root) {
        bool t=df(root,LONG_MIN,LONG_MAX);
        return t;
    }
};