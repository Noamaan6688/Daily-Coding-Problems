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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool t=false;
        while (!q.empty())
        {
            TreeNode*node=q.front();q.pop();
            if (t==1 && node!=NULL) return 0;
            if (node==NULL)
            {
                t=1;
                continue;
            }
            q.push(node->left);
            q.push(node->right);
        }
        while (!q.empty() && q.front()==NULL) q.pop();
        
        return q.empty();
    }
};