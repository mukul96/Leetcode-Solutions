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
    ListNode* partition(ListNode* head, int x) {
        ListNode *head1=new ListNode(x-1),*head2=new ListNode(x+1);
        
        ListNode *a=head1, *b=head2;
        while(head!=NULL){
            if(head->val <x){
               head1->next=head;
               head1=head1->next;
            }
            else{
               head2->next=head;
               head2=head2->next; 
            }
            head=head->next;
        }
        head1->next=b->next;
        head2->next=NULL;
        return(a->next);
    }
};
