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
    bool hasCycle(ListNode *head) {
        ListNode *single=head,*doublle=head;
        if(head==NULL || head->next==NULL){
            return(false);
        }
        while(doublle!=NULL && doublle->next!=NULL){
            
           
            single=single->next;
            doublle=doublle->next->next;
            
            if(single==doublle){
                return(true);
            }
        }
        return(false);
    }
};
