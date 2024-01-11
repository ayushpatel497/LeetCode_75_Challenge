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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return nullptr;
        ListNode* prevMid;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            prevMid=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prevMid->next=prevMid->next->next;
        return head;
    }
};