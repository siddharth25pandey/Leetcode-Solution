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
    ListNode* partition(ListNode* head, int x) {
        /*if(!head)return NULL;
        if(!head->next)return head;
        vector<int>v,before,after,ans;
          int index=0;
        ListNode* ptr=head,* res=NULL,*ans1=NULL;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
      
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==x)
            {
                index=i;
                break;
            }
        }
        for(int i=0;i<index;i++)
        {
            if(v[i]<x)ans.push_back(v[i]);
                
        }
        for(int i=index+1;i<v.size();i++)
        {
            if(v[i]<x)ans.push_back(v[i]);
                
        }
        for(int i=0;i<=index;i++)
        {
            if(v[i]>=x)ans.push_back(v[i]);
                
        }
        
        for(int i=index+1;i<v.size();i++)
        {
            if(v[i]>=x)ans.push_back(v[i]);
                
        }
        for(auto &i:ans)
        {
            if(ans1==NULL)
            {
                ans1= new ListNode(i);
                res=ans1;
            }
            else 
            {
                ans1->next=new ListNode(i);
                ans1=ans1->next;
            }
        }
        return res;*/
        
        ListNode *smaller_ptr = new ListNode(0), *greater_ptr = new ListNode(0), *ptr = head;
        ListNode *smaller = smaller_ptr, *greater = greater_ptr;
        
        while (ptr) {
            if (ptr->val < x) {
                smaller_ptr->next = ptr;
                smaller_ptr = smaller_ptr->next;
            }
            
            else {
                greater_ptr->next = ptr;
                greater_ptr = greater_ptr->next;
            }
            ptr = ptr->next;
        }
        
        greater_ptr->next = NULL;
        smaller_ptr->next = greater->next;
        return smaller->next;
    }
};