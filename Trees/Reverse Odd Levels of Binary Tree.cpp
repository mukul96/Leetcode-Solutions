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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<TreeNode*> v;
        vector<vector<TreeNode*>> vmatrix;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            if(temp==NULL){
                vmatrix.push_back(v);
                v.resize(0);
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                v.push_back(temp);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                
            }
        }
        
        for(int i=0;i<vmatrix.size();i++){
            if(i%2!=0){
                int len = vmatrix[i].size();
                int mid = len-1, k=0;
                while(k<mid){
                    swap(vmatrix[i][k]->val, vmatrix[i][mid]->val);
                    mid--;
                    k++;
                }
            }
        }
        
        return root;
    }
};
