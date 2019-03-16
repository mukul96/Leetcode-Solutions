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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *start1=new ListNode(1),*start2=new ListNode(2);
        ListNode *head1=start1,*head2=start2;
        int count=1;
        while(head!=NULL){
            if(count%2!=0){
                start1->next=head;
                start1=start1->next;
            }else{
                start2->next=head;
                start2=start2->next;
            }
            count++;
            head=head->next;
        }
        start1->next=head2->next;
        start2->next=NULL;
        return(head1->next);
    }
};
