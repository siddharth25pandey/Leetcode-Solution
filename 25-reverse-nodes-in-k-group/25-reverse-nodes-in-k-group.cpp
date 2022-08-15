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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>v;
        ListNode* ptr=head;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }

        for(int i=0;i<v.size();i+=k)
        {   
           if(i+k<=v.size())
            reverse(v.begin()+i,v.begin()+i+k);
        }
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