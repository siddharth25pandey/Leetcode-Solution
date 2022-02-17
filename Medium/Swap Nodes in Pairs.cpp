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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* ptr=head;
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<v.size()-1;i+=2)
        {
            swap(v[i],v[i+1]);
        }
        for(int i=0;i<v.size();i++)
        {
            ptr->val=v[i];
            ptr=ptr->next;
            
        }
            ptr=head;
    return head;
    }
};