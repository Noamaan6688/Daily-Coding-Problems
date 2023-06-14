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
    vector<int>v;
    int c=INT_MAX,c1=-1;
    
    void inorder(TreeNode* root){
      if (root == NULL) return ;
      inorder(root->left);
      v.push_back(root->val);
      inorder(root->right); 

  }

    int getMinimumDifference(TreeNode* root) {
    if (root->left != NULL) getMinimumDifference(root->left);
    if (c1>=0) c= min(c, root->val-c1);
    c1=root->val;
    if (root->right != NULL) getMinimumDifference(root->right);

    return c;
    }
};