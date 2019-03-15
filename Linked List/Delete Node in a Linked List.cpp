/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *first=node,*second=node->next;
        if(second->next==NULL){
           swap(first->val,second->val); 
            first->next=NULL;
            return;
        }
        while(second->next!=NULL){
            swap(first->val,second->val);
            first=first->next;
            second=second->next;
        }
        swap(first->val,second->val); 
        first->next=NULL;
        return;
        //first->next=NULL;
    }
};
