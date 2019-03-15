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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return(NULL);
        }
        while( head!=NULL && head->val==val ){
            head=head->next;
        }
        ListNode *start=head;
        if(head==NULL){
            return(NULL);
        }
        while(head->next!=NULL){
            if(head->next->val==val){
                head->next=head->next->next;
            }
            else{
                head=head->next;
            }
        }
        
        return(start);
    }
};
