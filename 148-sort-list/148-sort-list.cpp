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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode *cur = new ListNode(0);
        ListNode *temp = cur;
        while(l1 && l2) {
            if(l1->val < l2->val) {
                cur->next = l1;
                l1 = l1->next;
            }
            else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1) {
			cur->next = l1;
		}
        if(l2) {
			cur->next = l2;
		}
        return temp->next;
    }
    ListNode* sortList(ListNode* head) {
        /*ListNode* temp= head;
        ListNode* ptr=head;
        vector<int>v;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(v.begin(),v.end());
        ListNode* a=NULL,*b=NULL;
        for(auto i:v)
        {    if(!a)
            
        {
            a= new ListNode(i);
            b=a;
        }
         else 
         {  a->next= new ListNode(i);
             a=a->next;
         }
           // b=a;
        }
        return b;*/
         if(!head or !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Divide the list into two parts (one start with head and other with fast)
        fast = slow->next;
        slow->next = NULL;
        // Merge these List 
        return merge(sortList(head), sortList(fast));
        
    }
};