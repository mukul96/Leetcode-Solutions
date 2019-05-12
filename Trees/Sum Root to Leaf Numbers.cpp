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
    int sumNumbers(TreeNode* root,int temp=0) {
        if(root==NULL){
            return(0);
        }
        else{
            temp=temp*10 +root->val ;int a=0,b=0;
            if(!root->left && !root->right){
                return(temp);
            }
            if(root->left){
                a=sumNumbers(root->left,temp);
            }
            if(root->right){
                b=sumNumbers(root->right,temp);
            }
            
            
            return (a+b);
        }
    }
};
