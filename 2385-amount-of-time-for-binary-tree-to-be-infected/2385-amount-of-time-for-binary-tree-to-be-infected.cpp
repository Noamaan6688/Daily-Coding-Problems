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
    int c=0;
    pair<bool,int>df(TreeNode*root,int st)
    {
        if (root==NULL) return {0,0};
        pair<bool,int>p1=df(root->left,st);
        pair<bool,int>p2=df(root->right,st);
        if (root->val==st)
        {
            c=max(c,max(p1.second,p2.second));
            return {1,0};
        }
        if (p1.first)
        {
            int s=p1.second+p2.second+1;
            c=max(c,s);
            return {1,p1.second+1};
        }
        else if (p2.first)
        {
            int s=p1.second+p2.second+1;
            c=max(c,s);
            return {1,p2.second+1};
        }
        int s=max(p1.second,p2.second);
        return {0,s+1};
    }
    
    int amountOfTime(TreeNode* root, int st) {
        df(root,st);
        return c;
    }
};