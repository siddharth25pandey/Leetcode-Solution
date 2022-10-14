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
       ListNode* fast=head;
        ListNode*slow=head; ListNode*pre=head;
        if(!head or !head->next)return NULL;
        while(fast and fast->next)
        {
            if(slow!=fast)pre=pre->next;
            fast=fast->next->next;
            slow=slow->next;
        }
        pre->next=pre->next->next;
        return head;
        
    }
};