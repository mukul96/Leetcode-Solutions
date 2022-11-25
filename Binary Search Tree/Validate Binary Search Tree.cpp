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
    void inorder(TreeNode *root, long long  &prevValue, bool &flag){
        if(root){
            inorder(root->left, prevValue, flag);
            if(prevValue>=(root->val)){
                flag = false;
            }
            prevValue = (root->val);
            inorder(root->right, prevValue, flag);
        }
    }
    bool isValidBST(TreeNode* root) {
        bool flag = true;
        long long prevValue = LONG_MIN;
        inorder(root, prevValue, flag);
        
        return flag;
        
    }
};
