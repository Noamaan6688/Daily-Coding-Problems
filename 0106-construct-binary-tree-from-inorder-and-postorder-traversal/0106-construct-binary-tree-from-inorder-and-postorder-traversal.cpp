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
    TreeNode* buildTree(vector<int>& in, vector<int>& ps) {
        if (in.size()==0 || ps.size()==0) return NULL;
        int n1=in.size()-1,n2=ps.size()-1;
        stack<TreeNode*>st;
        TreeNode*c1=NULL;
        TreeNode*root=new TreeNode(ps[n2]);
        st.push(root);n2-=1;
        while (n2>=0)
        {
            while (!st.empty() && st.top()->val==in[n1])
            {
                c1=st.top();st.pop();
                n1-=1;
            }
            TreeNode*c2=new TreeNode(ps[n2]);
            if (c1!=NULL) c1->left=c2;
            else if (!st.empty())
            {
                TreeNode*c3=st.top();
                c3->right=c2;
            }
            st.push(c2);
            c1=NULL;
            n2-=1;
        }
        return root;
    }
};