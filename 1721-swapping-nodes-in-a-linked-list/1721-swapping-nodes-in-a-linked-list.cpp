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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* ptr= head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        ListNode* ans=NULL, *res=NULL;
        swap(v[k-1],v[v.size()-k]);
        for(auto i:v)
        {
            if(ans==NULL)
            {
                ans = new ListNode(i);
                    res=ans;
            }
            else 
            {   
                ans->next= new ListNode(i);
                ans= ans->next;
            }
        }
        return res;
    }
};