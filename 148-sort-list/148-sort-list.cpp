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
    ListNode* sortList(ListNode* head) {
        ListNode* temp= head;
        ListNode* ptr=head;
        vector<int>v;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(v.begin(),v.end());
       /* for(int i=0;i<v.size();i++)
        {
            temp->val=v[i];
            temp=temp->next;
        }
        temp=head;
        return head;*/
        ListNode* a=NULL,*b=NULL;
        for(auto i:v)
        {    if(a==NULL)
            
        {
            a= new ListNode(i);
           b=a;
        }
         else 
         {  a->next= new ListNode(i);
             a=a->next;
         }
           // b=a;
        }
        return b;
        
    }
};