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
    vector<vector<int>> levelOrder(Node* root) {
        vector<int> a;
        vector<vector<int> > b;
        queue<Node*> q;
        if(root==NULL){
            return(b);
        }
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node * temp=q.front();
            q.pop();
            if(temp==NULL ){
                b.push_back(a);
                a.resize(0);
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                a.push_back(temp->val);
                for(int i=0;i<temp->children.size();i++){
                    q.push(temp->children[i]);
                }
            }
        }
        
        return(b);
    }
};
