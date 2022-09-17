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
    ListNode* merge_two_ll(ListNode* l1, ListNode*l2)
    {
        if(!l1)return l2;
        if(!l2)return l1;
        ListNode* head= NULL;
        if(l1->val<=l2->val)
        {
            head=l1;
            head->next=merge_two_ll(l1->next,l2);
        }
        else 
        {
            head=l2;
            head->next=merge_two_ll(l1,l2->next);
        }
        return head;
       
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size())return NULL;
        ListNode* ans= lists[0];
        for(int i=1;i<lists.size();i++)
        {
            ans=merge_two_ll(ans,lists[i]);
        }
        return ans;
        
        
        // nlogn solution 
       /* if(lists.size()==0) return NULL;
        vector<int>v;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* ans=NULL,*res=NULL;
        for(auto i:v)
        {
            //insertattail(ans,i);
            if(!ans)
            {
                ans=new ListNode(i);
                res=ans;
            }
            else 
            {
                ans->next= new ListNode(i);
                ans=ans->next;
            }
        }
        return res;*/ 
        
    }
};