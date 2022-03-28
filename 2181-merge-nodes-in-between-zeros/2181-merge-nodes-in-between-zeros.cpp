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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr= head, *ans=NULL, *res=NULL;
        int sum=0;
        vector<int>v;
        /*while(curr)
        {
            if(curr->val==0)
            {
                if(ans==NULL)
                {
                    ans= new ListNode(sum);
                    res=ans;
                }
                else 
                {
                    ans->next= new ListNode(sum);
                    ans=ans->next;
                }
                sum=0;
            }
            else 
            {
                sum+=curr->val;
                
            }
            curr=curr->next;
        }*/
        while(curr!=NULL)
        {
            if(curr->val==0)
            {   
                v.push_back(sum);
                sum=0;
            }
            else 
            {
                sum+=curr->val;
            }
            curr=curr->next;
        }
        for(int i=1;i<v.size();i++)
        {
            if(ans==NULL)
            {
                ans= new ListNode(v[i]);
                res=ans;
                
            }
            else 
            {
                ans->next= new ListNode(v[i]);
                ans=ans->next;
            }
        }
        return res;
        
        
    }
};