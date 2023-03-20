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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<vector<TreeNode*>>v(n+1);
        v[1].push_back(new TreeNode(0));
        for (int i=1;i<=n;i+=2)
        {
            int c1=1;
            for (int c2=i-2;c2>0;c2-=2)
            {
                for (TreeNode* j:v[c2])
                {
                    for (TreeNode*k:v[c1])
                    {
                        TreeNode*root=new TreeNode(0,j,k);
                        v[i].push_back(root);
                    }
                }
                c1+=2;
            }
        }
        return v[n];
    }
};