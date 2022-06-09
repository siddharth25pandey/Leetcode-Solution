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
        if(!head or !head->next) return NULL;
        ListNode* ptr1=head;
        ListNode* ptr2= head;
        while(ptr2 and ptr2->next)
        {
           
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
             if(ptr1==ptr2) break;
        }
         if (!(ptr2 and ptr2->next)) return NULL;
        while (head != ptr1) {
            head = head->next;
            ptr1 = ptr1->next;
        }
        return head;
        
    }
};