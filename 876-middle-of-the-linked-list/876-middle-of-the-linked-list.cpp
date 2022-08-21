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
    ListNode* middleNode(ListNode* head) {
        /*ListNode* x=head;
        int size=0;
        while(x!=NULL)
        {
            size++;
            x=x->next;
        }
        for(int i=0;i<size/2;i++)
        {
            head=head->next;
        }
        return head;*/
        ListNode* fast=head,*slow=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};