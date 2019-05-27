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
    map<int,map<int,vector<int> > > m;
    void traverse(TreeNode *root,int x,int y){
        if(root==NULL){
            return;
        }else{
            
            m[x][y].push_back(root->val);
            traverse(root->left,x-1,y+1);
            traverse(root->right,x+1,y+1);
            
            
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        traverse(root,0,0);
        vector<vector<int>> res;
        if(root==NULL){
            return(res);
        }
        for(auto it=m.begin();it!=m.end();it++){
            vector<int> b;
            for(auto k=it->second.begin();k!=it->second.end();++k ){
                vector<int> a=k->second;
                sort(a.begin(),a.end());
                for(int i=0;i<a.size();i++){
                    cout<<a[i]<<"  ";
                    b.push_back(a[i]);
                }
            }
            res.push_back(b);
        }
       
        return(res);
    }
};














