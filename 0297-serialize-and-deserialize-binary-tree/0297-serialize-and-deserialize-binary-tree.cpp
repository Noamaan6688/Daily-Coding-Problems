/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root==NULL) return "#,";
        return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string>q;
        string s;
        for (int i=0;i<data.size();i+=1)
        {
            if (data[i]==',')
            {
                q.push(s);
                s="";
            }
            else s+=data[i];
        }
        if (s.size()) q.push(s);
        return df(q);
    }
    TreeNode*df(queue<string>&q)
    {
        string s=q.front();q.pop();
        
        if (s=="#") return NULL;
        TreeNode*root=new TreeNode(stoi(s));
        root->left=df(q);
        root->right=df(q);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));