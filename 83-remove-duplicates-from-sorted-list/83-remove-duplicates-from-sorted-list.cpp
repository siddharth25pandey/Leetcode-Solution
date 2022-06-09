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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* x=head;
        set<int>s;
        while(head!=NULL)
        {
            /*while(head->next!=NULL and head->val==head->next->val)
            {
                
            head->next=head->next->next;
            }*/
            s.insert(head->val);
            head=head->next;
        }
       ListNode* ans=NULL,*res=NULL;
        for(auto i:s)
        {
            if(ans==NULL)
                {
                    ans= new ListNode(i);
                    res=ans;
                }
                else 
                {
                    ans->next= new ListNode(i);
                    ans=ans->next;
                }
        }
      
        
        return res;
    }
};