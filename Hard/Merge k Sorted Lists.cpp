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
     void insertattail(ListNode* &head, int val){
        ListNode* n = new ListNode(val);
        if (head==NULL){
            head = n;
            return;
        }
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp = temp ->next;
        }
        temp->next = n;
        n->next = NULL;

    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
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
        ListNode* ans=NULL;
        for(auto i:v)
        {
            insertattail(ans,i);
        }
        return ans;
        
    }
};