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
#include <unordered_set>
using namespace std;

// struct TreeNode 
// {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x):val(x),left(nullptr),right(nullptr){}
// };

class FindElements {
private:
    unordered_set<int> elements;
    void recover(TreeNode* node, int val) {
        if (!node) return;
        node->val=val;
        elements.insert(val);
        recover(node->left,val*2+1);
        recover(node->right,val*2+2);
    }

public:
    FindElements(TreeNode* root) {
        recover(root,0);
    }

    bool find(int target) {
        return elements.find(target)!=elements.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */