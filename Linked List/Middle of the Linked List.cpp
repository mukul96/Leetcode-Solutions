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
    ListNode* middleNode(ListNode* head) {
        ListNode *a=head,*b=head;
        while(b!=NULL &&  b->next!=NULL ){
            a=a->next;
            b=b->next->next;
        }
        return(a);
    }
};
