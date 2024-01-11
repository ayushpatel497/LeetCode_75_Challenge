/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* midNode(ListNode* head) {
        struct ListNode *slow, *fast;
        slow=head;
        fast=head->next;
        
        while(slow!=NULL && fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL) fast=fast->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode *i, *j;
        i=head, j=NULL;
        while(i!=NULL){
            ListNode *on=i->next;
            i->next=j;
            j=i;
            i=on;
        }
        return j;
    }
    
    int pairSum(ListNode* head) {
        ListNode *mid=midNode(head);
        ListNode *i=head, *j=reverseList(mid->next);
        mid->next=NULL;
        int ans=0;
        while(i!=NULL && j!=NULL){
            ans = max(ans,i->val+j->val);
            i=i->next, j=j->next;
        }
        return ans;
    }
};