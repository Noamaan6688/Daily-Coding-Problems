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
    bool isSymmetric(TreeNode* root) {
        vector<vector<int>>v;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {
            vector<int>v1;
            int n=q.size();
            while (n--)
            {
                TreeNode* node=q.front();
                if (node->left)
                {
                    q.push(node->left);
                    v1.push_back(node->left->val);
                }
                else v1.push_back(-101);
                if (node->right)
                {
                    q.push(node->right);
                    v1.push_back(node->right->val);
                }
                else v1.push_back(-101);
                q.pop();
            }
            v.push_back(v1);        
        }
        for (int i=0;i<v.size();i+=1)
        {
            int n=v[i].size();
            int n1=n/2-1,n2=n/2;
            while (n1>=0 && n2<n)
            {
                if (v[i][n1]!=v[i][n2]) return 0;
                n1-=1;n2+=1;
            }
        }
        return 1;
    }
};