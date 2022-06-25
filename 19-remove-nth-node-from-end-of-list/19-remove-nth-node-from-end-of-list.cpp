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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       /* ListNode* iter = head;
	int len = 0, i = 1;
	while(iter) iter = iter -> next, len++;    // finding the length of linked list
	if(len == n) return head -> next;          // if head itself is to be deleted, just return head -> next
	for(iter = head; i < len - n; i++) iter = iter -> next; // iterate first len-n nodes
	iter -> next = iter -> next -> next;      // remove the nth node from the end
	return head;*/
        ListNode* ptr=head;
        int len=0;
        while(ptr)
        {
            len++;
            ptr=ptr->next;
        }
        ptr=head;
        vector<int>v;
        int c=0;
                while(ptr)
        {
           if(c!=len-n)
           {
               v.push_back(ptr->val);
           }
            ptr=ptr->next;
                    c++;
        }
        /*for(auto &i:v)
        {
            cout <<i<<" ";
            
        }*/
        ListNode* res=NULL,*ans=NULL;
        for(auto &i:v)
        {
            if(ans==NULL)
            {
                ans= new ListNode(i);
                res=ans;
            }
            else 
            {
                ans->next=new ListNode(i);
                ans=ans->next;
            }
        }
        return res;
    }
};