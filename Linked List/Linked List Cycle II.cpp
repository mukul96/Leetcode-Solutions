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
    ListNode *detectCycle(ListNode *head) {
      ListNode *single=head,*doublle=head; 
        bool flag=false;
        while(doublle!=NULL && doublle->next!=NULL){
            doublle=doublle->next->next;
            single=single->next;
            if(doublle==single){
                flag=true;
                ListNode *c=head;
                while(c!=doublle){
                    c=c->next;
                    doublle=doublle->next;
                }
                return(doublle);
            }
        }
        
      
            return(NULL);
        
    }
};
