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
        /*vector<int>v;
        ListNode* ptr=head,* ans=NULL,*res=NULL;
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
        return res;*/
         ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(!cursor) return head;
            cursor = cursor->next;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        for(int i = 1; i <= k; i++){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};