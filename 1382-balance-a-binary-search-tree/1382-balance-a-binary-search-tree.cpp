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
    void df1(TreeNode*root,vector<int>&v)
    {
        if (root==NULL) return;
        df1(root->left,v);
        v.push_back(root->val);
        df1(root->right,v);
    }
    
    TreeNode*df2(int i,int j,vector<int>&v)
    {
        if (i>j) return NULL;
        
        int k=(i+j)>>1;
        TreeNode*node=new TreeNode(v[k]);
        node->left=df2(i,k-1,v);
        node->right=df2(k+1,j,v);
        return node;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        df1(root,v);
        return df2(0,v.size()-1,v);
    }
};