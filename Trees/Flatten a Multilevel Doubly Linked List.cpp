/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node() {}

    Node(int _val, Node* _prev, Node* _next, Node* _child) {
        val = _val;
        prev = _prev;
        next = _next;
        child = _child;
    }
};
*/
class Solution {
public:
    Node* flatten(Node* root) {
      if(!root){
          return NULL;
      }
        Node *temp=root;
        if(root->child!=NULL){
            Node *temp1=root->next;
            root->next=root->child;
            root->child->prev=root;
            root->child=NULL;
            while(root->next!=NULL)
                root=root->next;
            root->next=temp1;
            if(temp1){
                temp1->prev=root;
            }
            
        }
        flatten(temp->next);
        return temp;
    }
};


