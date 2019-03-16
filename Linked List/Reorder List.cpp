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
    ListNode* reverse(ListNode* front){
        ListNode *back=NULL,*c;
        while(front!=NULL){
            c=front->next;
            front->next=back;
            back=front;
            front=c;
        }
        return(back);
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode *single=head,*doublle=head;
        while(doublle->next!=NULL && doublle->next->next!=NULL){
            single=single->next;
            doublle=doublle->next->next;
        }
        
        ListNode* l2=reverse(single->next); 
        
        ListNode* l1=head;
        single->next=NULL;
        ListNode *start1=new ListNode(1);
        int count=1;
        ListNode *head1=start1;
        while(l1!=NULL || l2!=NULL){
            if(l2!=NULL){
                if(count%2!=0){
                    start1->next=l1;
                    l1=l1->next;
                }else{
                    start1->next=l2;
                    l2=l2->next;
                } 
            }
            else{
                    start1->next=l1;
                    l1=l1->next;
            }
            count++;
            start1=start1->next;
        }
        head=head1->next;
        
    }
};
