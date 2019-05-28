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
    int traverse(TreeNode *root,int &maxi){
        if(root==NULL){
            return(0);
        }
        else{
            int a=traverse(root->left,maxi);
            int b=traverse(root->right,maxi);
            if(a<0){
                a=0;
            }
            if(b<0){
                b=0;    
            }
            maxi=max(maxi,root->val+a+b);
            return( root->val+max(a,b) );
        }
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        traverse(root,maxi);
        return(maxi);
    }
};
