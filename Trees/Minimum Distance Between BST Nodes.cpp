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
    void minDiff(TreeNode *root,int &prev,int &diff){
        if(root==NULL){
            return;
        }
        else{
            minDiff(root->left,prev,diff);
            if(prev==INT_MAX){
                prev=root->val;
            }
            else{
               diff=min(root->val - prev,diff); 
               prev=root->val;
            }
            minDiff(root->right,prev,diff);
        }
    }
    int minDiffInBST(TreeNode* root) {
        int prev=INT_MAX,diff=INT_MAX;
        minDiff(root,prev,diff);
        return(diff);
    }
};
