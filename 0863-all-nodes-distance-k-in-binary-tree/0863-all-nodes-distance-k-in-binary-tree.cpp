/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>mp;
    vector<int>v;
    unordered_set<TreeNode*>visit;
    
    void df1(TreeNode*root,TreeNode*node)
    {
        if (root==NULL) return;
        mp[root]=node;
        df1(root->left,root);
        df1(root->right,root);
    }
    
    void df2(TreeNode*root,int k)
    {
        if (root==NULL) return;
        if (visit.count(root)) return;
        visit.insert(root);
        if (k==0)
        {
            v.push_back(root->val);
            return;
        }
        df2(root->left,k-1);
        df2(root->right,k-1);
    }
    
    vector<int> distanceK(TreeNode*root,TreeNode*ta,int k) {
        df1(root,NULL);
        df2(ta,k);
        TreeNode*node=mp[ta];
        k-=1;
        while (node && k>=0)
        {
            df2(node,k);
            node=mp[node];
            k-=1;
        }
        return v;
    }
};