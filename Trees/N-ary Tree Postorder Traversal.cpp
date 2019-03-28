/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void check(Node *root,vector<int>& a){
        if(root==NULL){
            return;
        }
        else{
            a.push_back(root->val);
            for(int i=root->children.size()-1;i>=0;i--){
                check(root->children[i],a);
            }
            return;
        }
    }
    vector<int> postorder(Node* root) {
        vector<int> a;
        check(root,a);
        reverse(a.begin(),a.end());
        return(a);
    }
};
