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
    bool bst(TreeNode* root, long long minval,long long maxval){
        if(!root) return true;
        if(root->val<=minval || root->val>=maxval)    return false;
        bool left=bst(root->left,minval,root->val);
        bool right = bst(root->right,root->val,maxval);
        return left&& right;
    }
    bool isValidBST(TreeNode* root) {
        return bst(root,LLONG_MIN,LLONG_MAX);
    }
};
