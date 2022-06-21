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
       /* ListNode* current=head;
        ListNode* prev=NULL; ListNode*next_point=NULL;
        while(current!=NULL)
        {
            next_point=current->next;
            current->next=prev;
            prev=current;
            current=next_point;
            
        }
        return prev;*/
        vector<int>v;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        reverse(v.begin(),v.end());
        ListNode* ans=NULL, *res=NULL;
        for(auto i:v)
        {
            if(ans==NULL)
            {
                ans= new ListNode(i);
                 res=ans;
            }
            else 
            {
                ans->next=new ListNode(i);
               ans=ans->next;
            }
        }
        return res;
    }
};