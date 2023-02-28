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
    bool df(TreeNode*l,TreeNode*r)
    {
        if (l==NULL && r==NULL) return 1;
        if (l==NULL || r==NULL) return 0;
        if (l->val!=r->val) return 0;
        bool t1=df(l->left,r->right);
        bool t2=df(l->right,r->left);
        if (t1==0 || t2==0) return 0;
        return 1;
    }
    
    
    bool isSymmetric(TreeNode* root) {
        bool t=df(root->left,root->right);
        return t;
    }
};