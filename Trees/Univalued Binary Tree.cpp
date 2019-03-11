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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL || (root!=NULL && root->left==NULL && root->right==NULL)){
            return(true);
        }
        if(root->left!=NULL && root->right==NULL){
            return isUnivalTree(root->left) && (root->val==root->left->val);
        }
        if(root->left==NULL && root->right!=NULL){
            return isUnivalTree(root->right) && (root->val==root->right->val);
        }
        return isUnivalTree(root->right) && (root->val==root->right->val) && (root->val==root->left->val) && isUnivalTree(root->left);
    }
};
