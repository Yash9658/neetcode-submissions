/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* lca(TreeNode* root,int n1,int n2){
     if(!root)   return NULL;
        
        if(root->val>n1 &&  root->val>n2 ){
           return lca(root->left,n1,n2);
        }
        
        else if(root->val<n1 &&  root->val<n2 ){
          return  lca(root->right,n1,n2);
        }
        else return root;
          
  }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
        return lca(root,n1->val,n2->val);
    }
};