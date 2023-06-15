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
    int maxLevelSum(TreeNode* root) {
        int c=0,c1=-1e6,i=0;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {
            i+=1;
            int c2=0,n=q.size();
            for (int j=0;j<n;j+=1)
            {
                TreeNode*c3=q.front();
                q.pop();
                c2+=c3->val;
                if (c3->left) q.push(c3->left);
                if (c3->right) q.push(c3->right);
            }
            if (c2>c1)
            {
                c=i;
                c1=c2;
            }
        }
        return c;
    }
};