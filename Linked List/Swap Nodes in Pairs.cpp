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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode * head1=new ListNode(-1);
        head1->next=head;
        ListNode *a=head1;
        if(head==NULL || head->next==NULL){
            return(head);
        }
        while(head1!=NULL && head1->next!=NULL && head1->next->next!=NULL){
            ListNode *start1=head1,*start2=head1->next,*start3=head1->next->next;
            start1->next=start2->next;
            ListNode *x=start3->next;
            start3->next=start2;
            start2->next=x;
            head1=head1->next->next;  
        }
        return(a->next);
    }
};
