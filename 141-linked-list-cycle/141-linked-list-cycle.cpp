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
    bool hasCycle(ListNode *head) {
         if(head==NULL or head->next==NULL)
        {
            return false;
        }
       
        ListNode *p=head;
        ListNode *k=head->next;
        while(k and k->next)
        {
            if(p==k)
            {
                return true;
            }
            p=p->next;
            k=k->next->next;
        }
        return false;
    }
};