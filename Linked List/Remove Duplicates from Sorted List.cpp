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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *start=head;
       // int presentValue=head->val;
        if(head==NULL){
            return(head);
        }
        while(start->next!=NULL){
            if(start->val==start->next->val){
                start->next=start->next->next;
            }
            else{
                start=start->next;
            }
        }
        return(head);
    }
};
