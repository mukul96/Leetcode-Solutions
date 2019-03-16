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
    ListNode* reverseList(ListNode* head) {
        ListNode *front=head,*back=NULL,*c;
        while(front!=NULL){
            c=front->next;
            front->next=back;
            back=front;
            front=c;
            cout<<"check ";
        }
        return(back);
    }
};
