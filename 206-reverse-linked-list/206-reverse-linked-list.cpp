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
    ListNode* reverseList(ListNode* head) {
        /*ListNode* current=head;
        ListNode* prev=NULL; ListNode*next_point=NULL;
        while(current!=NULL)
        {
            next_point=current->next;
            current->next=prev;
            prev=current;
            current=next_point;
            
        }
        return prev;*/
        stack<int>s;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
           s.push(ptr->val);
            ptr=ptr->next;
        }
       
        ListNode* ans=NULL, *res=NULL;
        while(!s.empty())
        {
            if(ans==NULL)
            {
                ans= new ListNode(s.top());
                 res=ans;
                s.pop();
            }
            else 
            {
                ans->next=new ListNode(s.top());
               ans=ans->next;
                s.pop();
            }
        }
        return res;
    }
};