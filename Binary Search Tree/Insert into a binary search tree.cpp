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
    TreeNode *findPosition(TreeNode *root, int val){
        if(root->left==NULL && root->right==NULL){
            return root;
        }
        else if(root->val< val && root->right==NULL){
            return root;
        }
        else if(root->val>=val && root->left==NULL){
            return root;
        }
        else if(root->val< val && root->right!=NULL){
            return findPosition(root->right,val);
        }
        else if(root->val>=val && root->left!=NULL){
            return findPosition(root->left,val);
        }
        return NULL;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new TreeNode(val);
        }
        
        TreeNode *res = findPosition(root, val);
        if(res->val<val){
            res->right = new TreeNode(val);
        }
        else {
            res->left = new TreeNode(val);
        }
        return root;
    }
};