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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if (root==NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        v.push_back({root->val});
        while (!q.empty())
        {
            int n=q.size();
            vector<int>v1;
            while (n--)
            {
                TreeNode*node=q.front();
                if (node->left)
                {
                    q.push(node->left);
                    v1.push_back(node->left->val);
                }
                if (node->right)
                {
                    q.push(node->right);
                    v1.push_back(node->right->val);
                }
                q.pop();
            }
            if (v1.size()>0) v.push_back(v1);
        }
        return v;
    }
};