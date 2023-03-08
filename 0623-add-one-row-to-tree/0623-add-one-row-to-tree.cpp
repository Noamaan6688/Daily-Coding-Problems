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
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        if (d==1)
        {
            TreeNode*node=new TreeNode(val);
            node->left=root;
            return node;
        }
        int c=0;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {
            int n=q.size();
            c+=1;
            while (n--)
            {
                TreeNode*node=q.front();q.pop();
                if (c!=d-1)
                {
                    if (node->left) q.push(node->left);
                    if (node->right) q.push(node->right);
                }
                else
                {
                    TreeNode*c1=new TreeNode(val);
                    c1->left=node->left;
                    node->left=c1;
                    TreeNode*c2=new TreeNode(val);
                    c2->right=node->right;
                    node->right=c2;
                }
            }
        }
        return root;
    }
};