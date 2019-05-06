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
    int inorder(TreeNode *root){
        if(root==NULL){
            return(0);
        }
        int a=inorder(root->left);
        int b=inorder(root->right);
        return(a+b+root->val);
    }
    void inorderTraverse(TreeNode * root,int &sum){
        if(root==NULL){
            return ;
        }
        inorderTraverse(root->left,sum);
        int temp=root->val;
        root->val=sum;
        sum=sum-temp;
        inorderTraverse(root->right,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=inorder(root);
        inorderTraverse(root,sum);
        return(root);
    }
};
