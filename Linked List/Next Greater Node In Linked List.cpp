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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> a;
        ListNode * x=head;
        while(x!=NULL){
            a.push_back(x->val);
            x=x->next;
        }
        if(head==NULL ){
            return a;
        }
        vector<int> res;
        stack<int> s;
        int i=a.size()-1;
        while(i!=-1){
            if(s.empty()){
                res.push_back(0);
                s.push(a[i]);
                i--;
            }
            else if(s.top()>a[i]){
                res.push_back(s.top());
                s.push(a[i]);
                i--;
            }
            else{
                while( !s.empty() && s.top()<=a[i]){
                    s.pop();
                }
            }
        }
        reverse(res.begin(),res.end());
        return(res);
    }
};
