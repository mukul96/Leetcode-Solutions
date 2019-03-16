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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA,*b=headB;
        int countA=0,countB=0;
        
        while(a!=NULL){
            a=a->next;
            countA++; 
        }
        while(b!=NULL){
            b=b->next;
            countB++; 
        }
        
        int diff=countA-countB;
        if(diff>0){
            int k=abs(diff);
            while(k!=0){
                headA=headA->next;
                k--;
            }
        }
        if(diff<0){
            int k=abs(diff);
            while(k!=0){
                headB=headB->next;
                k--;
            }
        }
        
        while(headA!=NULL){
            if(headA==headB){
                return(headA);
            }
            headA=headA->next;
            headB=headB->next;
        }
        return(NULL);
    }
};
