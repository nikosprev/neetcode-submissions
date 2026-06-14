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
    void invert(TreeNode * node){
        TreeNode *temp;
   

        temp=node->left;
            node->left=node->right;
        node->right=temp;
        
        if(node->right) invert(node->right);
        if(node->left) invert(node->left);
        

        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        
        if(root) invert(root);
        return root;
    }
};
