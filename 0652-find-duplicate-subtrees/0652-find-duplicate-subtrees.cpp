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
    string df(TreeNode* root,unordered_map<string,int>&mp,vector<TreeNode*>&v)
    {
        if (root==NULL) return "#";
        
        string s1=df(root->left,mp,v);
        string s2=df(root->right,mp,v);
        string s=to_string(root->val)+"!"+s1+"!"+s2;
        
        if (mp[s]==1) v.push_back(root);
        mp[s]++;
        return s;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>v;
        unordered_map<string,int>mp;
        df(root,mp,v);
        return v;
    }
};