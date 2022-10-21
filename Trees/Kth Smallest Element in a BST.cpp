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
    void inorder(TreeNode * root, int &currentIndex,int k, int &value){
        if(root){  
            inorder(root->left, currentIndex, k, value);
            currentIndex = currentIndex+1;
            if(currentIndex==k){
                value = root->val;
            }
            inorder(root->right, currentIndex, k, value);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int currentIndex = 0, value = -1;
        inorder(root, currentIndex, k, value);
        return value;
    }
};
