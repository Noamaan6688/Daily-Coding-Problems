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
    int helper(TreeNode *root)
    {
        if(root == NULL) return 0;
        int left = helper(root -> left);
        if(left == -1) return -1;
        int right = helper(root -> right);
        if(right == -1) return -1;
        if(abs(left - right) > 1) return -1;
        return 1 + max(left, right);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return 1;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode*node=q.front();q.pop();
                int c= helper(node);
                if(c==-1) return 0;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return 1;
    }
};