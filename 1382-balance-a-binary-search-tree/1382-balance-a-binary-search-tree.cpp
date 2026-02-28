class Solution {
public:
    void traverseInorder(TreeNode *root, vector<int> &inorder){
        if(root == nullptr)
            return;
        traverseInorder(root->left, inorder);
        inorder.push_back(root->val);
        traverseInorder(root->right, inorder);
    }

    TreeNode* inorderToBST(vector<int> &inorder, int low, int high){
        if(low > high)
            return nullptr;
        int mid = (low + high) / 2;
        TreeNode *left = inorderToBST(inorder, low, mid-1);
        TreeNode *right = inorderToBST(inorder, mid+1, high);
        return  new TreeNode(inorder[mid], left, right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorder;
        traverseInorder(root, inorder);
        return inorderToBST(inorder, 0, inorder.size()-1);
    }
};