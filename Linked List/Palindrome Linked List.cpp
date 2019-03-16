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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return(true);
        }
        ListNode *single=head,*doublle=head;
        while(doublle->next!=NULL && doublle->next->next!=NULL){
            single=single->next;
            doublle=doublle->next->next;
        }
        //cout<<single->val<<" ";
        ListNode *front=single->next,*back=NULL,*c;
        while(front!=NULL){
            c=front->next;
            front->next=back;
            back=front;
            front=c;
        }
        while(back!=NULL){
            if(back->val!=head->val){
                return(false);
            }
            back=back->next;
            head=head->next;
        }
        return(true);
    }
};
