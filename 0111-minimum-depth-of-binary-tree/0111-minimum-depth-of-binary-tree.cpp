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
    int minDepth(TreeNode* root) {
        if (root==NULL) return 0;
        int c1,c2;
        c1=minDepth(root->left);
        c2=minDepth(root->right);
        if (root->left==NULL && root->right==NULL) return 1;
        if (root->left==NULL) return c2+1;
        if (root->right==NULL) return c1+1;

        return min(c1,c2)+1;
    }
};