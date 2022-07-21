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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*ptr=head;
        ListNode*temp=head;
        vector<int>v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        ListNode* ans=NULL,*res=NULL;
        for(auto &i:v)
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