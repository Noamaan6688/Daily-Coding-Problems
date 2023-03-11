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
    void df(TreeNode*root,vector<string>&v,string s)
    {
        if (root->left==NULL && root->right==NULL) v.push_back(s+to_string(root->val));
        else
        {
            if (root->left) df(root->left,v,s+to_string(root->val)+"->");
            if (root->right) df(root->right,v,s+to_string(root->val)+"->");
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        if (root) df(root,v,"");
        return v;
    }
};