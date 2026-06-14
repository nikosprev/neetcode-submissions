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
public: int res;
        int dfs(TreeNode* node){
        if(!node){
            return 0;
        }
        else{
            int left=dfs(node->left);
            int right=dfs(node->right);
            res=max(res,left+right);
            return 1+max(left,right);
        }
}
    int diameterOfBinaryTree(TreeNode* root) {
        res=0;
        dfs(root);
        return res;
    }
};
