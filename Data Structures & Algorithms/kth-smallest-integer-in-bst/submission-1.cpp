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
    int kthSmallest(TreeNode* root, int k) {
        int result = -1;
        inorder(root, k, result);
        return result;
    }
    
    void inorder(TreeNode* node, int& k, int& result) {
        if (!node || result != -1) return;
        
        // Left subtree
        inorder(node->left, k, result);
        
        // Current node
        k--;
        if (k == 0) {
            result = node->val;
            return;
        }
        
        // Right subtree
        inorder(node->right, k, result);
    }
};