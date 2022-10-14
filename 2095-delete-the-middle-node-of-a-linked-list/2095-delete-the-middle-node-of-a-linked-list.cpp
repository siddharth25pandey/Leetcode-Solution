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
    ListNode* deleteMiddle(ListNode* head) {
       vector<int>v;
        ListNode* ptr=head;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        vector<int>a;
        int c=v.size()/2;
        
        int k=0;
        for(int i=0;i<v.size();i++)
        {
            if(i!=c)a.push_back(v[i]);
        }
        ListNode* ans=NULL,*res=NULL;
        for(auto &i:a)
        {
            if(!ans)
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