#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.*/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* ptr=head;
        ListNode* temp=head;
        vector<int>v;
        vector<int>ans;
        
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
            
        }
        if(k>=v.size()) 
        {   while(k>=v.size())
        {
            k=k-v.size();
        }
        }
        for(int i=v.size()-k;i<v.size();i++)
        {
            ans.push_back(v[i]);
        }
        for(int i=0;i<v.size()-k;i++)
        {
            ans.push_back(v[i]);
        }
         for(int i=0;i<ans.size();i++)
        {
            ptr->val=ans[i];
             ptr=ptr->next;
        }
        ptr=head;
        return head;
    }
};