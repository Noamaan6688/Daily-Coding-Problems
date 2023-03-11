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
    int df(TreeNode*&root,int&c)
    {
        if (root==NULL) return 0;
        int c1=max(0,df(root->left,c)),c2=max(0,df(root->right,c));
        c=max(c,c1+c2+root->val);
        return root->val+max(c1,c2);
    }
    
    int maxPathSum(TreeNode* root) {
        int c=root->val;
        df(root,c);
        return c;
    }
};