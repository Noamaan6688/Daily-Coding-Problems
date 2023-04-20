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
    long long int df(long long int i,long long int j, TreeNode*root, vector<long long int>&v)
    {
        if (root==nullptr) return 0;
        if (j==v.size()) v.push_back(i);
        long long int c=i-v[j]+1;
        long long int c1=df(i*2,j+1,root->left,v);
        long long int c2=df(i*2+1,j+1,root->right,v);
        return max({c,c1,c2});
    }
    
    int widthOfBinaryTree(TreeNode* root) {
        // if (root==NULL) return 0;
        // vector<long long int>v;
        // long long int c=df(1,0,root,v);
        
        
        int c=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while (!q.empty())
        {
            long long int c1=q.front().second,c2=q.back().second;
            int n=q.size();
            for (int i=0;i<n;i+=1)
            {
                auto c=q.front();q.pop();
                auto j=c.second;
                if (c.first->left) q.push({c.first->left,(long long int)2*j});
                if (c.first->right) q.push({c.first->right,(long long int)2*j+1});
            }
            c= max(c,int(c2-c1+1));
        }
        
        return c;
    }
};