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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode *start2=new ListNode(2);
        ListNode *start1=start2;
        while(l1!=NULL || l2!=NULL){
            if(l1==NULL){
                start2->next=l2;
                break;
            }
            else if(l2==NULL){
                start2->next=l1;
                break;
            }
            else if(l1->val > l2->val){
                start2->next=l2;
                start2=start2->next;
                l2=l2->next;
            }
            else if(l1->val <= l2->val){
                start2->next=l1;
                start2=start2->next;
                l1=l1->next;
            }
        }
        return(start1->next);
        
    }
};
