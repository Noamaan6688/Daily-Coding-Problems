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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        stack<TreeNode*>st;
        TreeNode* root=new TreeNode(preorder[0]);
        st.push(root);
        int c1=1,c2=0;

        while (!st.empty()) {
            TreeNode* c=st.top();
            if (c->val==postorder[c2]) 
            {
                st.pop();
                c2+=1;
            } 
            else 
            {
                TreeNode* newNode=new TreeNode(preorder[c1]);
                c1+=1;
                if (!c->left) c->left=newNode;
                else c->right=newNode;
                st.push(newNode);
            }
        }
        return root;
    }
};