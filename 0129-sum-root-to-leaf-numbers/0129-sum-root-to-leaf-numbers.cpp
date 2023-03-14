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
    int sumNumbers(TreeNode* root) {
        int c=0,c1=0,c2=1;
        TreeNode*t=root;
        while (t)
        {
            if (t->left==NULL)
            {
                c1=c1*10+t->val;
                if (t->right==NULL) c+=c1;
                t=t->right;
            }
            else
            {
                TreeNode*t1=t->left;
                while (t1->right && t1->right!=t) t1=t1->right,c2+=1;
                if (t1->right==NULL)
                {
                    c1=c1*10+t->val;
                    t1->right=t;
                    t=t->left;
                }
                else
                {
                    t1->right=NULL;
                    if (t1->left==NULL) c+=c1;
                    c1=c1/pow(10,c2);
                    t=t->right;
                }
                c2=1;
                
            }
        }
        return c;
    }
};