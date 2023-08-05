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
    vector<TreeNode*> buildTree(int start, int end) {
        vector<TreeNode*> ans;

        if(start > end) 
        {
            ans.push_back(NULL);
            return ans;
        }

        for(int i = start; i <= end; ++i) {
            vector<TreeNode*> leftSubTree = buildTree(start, i - 1);    
            vector<TreeNode*> rightSubTree = buildTree(i + 1, end);     

            for(int j = 0; j < leftSubTree.size(); j++) {
                for(int k = 0; k < rightSubTree.size(); k++) {
                    TreeNode* root = new TreeNode(i);   
                    root->left = leftSubTree[j];   
                    root->right = rightSubTree[k];  
                    ans.push_back(root); 
                }
            }
        }

        return ans;
    }
    vector<TreeNode*> generateTrees(int n,int start=1) {
         
        if(n<start) return {NULL};
        vector<TreeNode*>res;
        for(int i=start;i<=n;i++){
            for(auto leftSubTree:generateTrees(i-1,start)){
                for(auto rightSubTree:generateTrees(n,i+1)){
                    res.push_back(new TreeNode(i,leftSubTree,rightSubTree));
                }
            }
        }
        return res;
    }
};