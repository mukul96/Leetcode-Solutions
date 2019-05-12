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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return false;
        }
        else if(root->val==sum && !root->left && !root->right){
            return(true);
        }
        else{
            
            bool a=hasPathSum(root->left,sum-root->val);
            bool b=hasPathSum(root->right,sum-root->val);
            return(a || b);
        }  
    }
};
