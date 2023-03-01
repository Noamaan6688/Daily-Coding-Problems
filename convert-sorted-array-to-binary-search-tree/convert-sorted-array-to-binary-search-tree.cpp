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
    TreeNode* df(int i,int n,vector<int>&nums)
    {
        if (i>n) return NULL;
        int j=(i+n)/2;
        TreeNode* root=new TreeNode(nums[j]);
        root->left=df(i,j-1,nums);
        root->right=df(j+1,n,nums);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return df(0,nums.size()-1,nums);
        // return t;
    }
};