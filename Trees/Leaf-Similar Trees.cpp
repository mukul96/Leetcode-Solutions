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
    void findSequence(TreeNode * root,vector<int> &a){
        if(root==NULL){
            return;
        }
        else{
            if(root->left==NULL && root->right==NULL){
                a.push_back(root->val);
            }
            findSequence(root->left,a);
            findSequence(root->right,a);
            return;
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        findSequence(root1,a);
        findSequence(root2,b);
        int n1=a.size(),n2=b.size();
        if(n1!=n2){
            return(false);
        }
        for(int i=0;i<n1;i++){
            if(a[i]!=b[i]){
                return(false);
            }
        }
        return(true);
    }
};
