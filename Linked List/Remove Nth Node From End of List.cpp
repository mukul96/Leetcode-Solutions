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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *head1=new ListNode(-1);
        head1->next=head;
        ListNode * fast=head1,*slow=head1;
        int i=0;
        while(i!=n){
            fast=fast->next;
            i++;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return(head1->next);
    }
};
