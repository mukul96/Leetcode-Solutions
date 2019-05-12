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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int sum,vector<int> a={}) {
        if(root==NULL){
            return {};
        }
        else if(root->val==sum && !root->left && !root->right){
            a.push_back(root->val);
            res.push_back(a);
            return res;
        }
        else{
            a.push_back(root->val);
            pathSum(root->left,sum-root->val,a);
            pathSum(root->right,sum-root->val,a);
            return(res);
        }  
    }
};
