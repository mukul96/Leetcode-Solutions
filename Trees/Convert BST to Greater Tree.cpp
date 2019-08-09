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
    int val1=0;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->right);
        int val2=val1;
        val1=val1+root->val;
        root->val=root->val+val2;
         
        inorder(root->left);
        
    }
    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        return(root);
    }
};
