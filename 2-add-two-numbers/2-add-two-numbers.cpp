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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = NULL,*res=NULL;
        int carry = 0;

        while(l1!=NULL or l2!=NULL or carry){
            int sum = 0;
            if(l1!=NULL){
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum = sum + l2->val;
                l2 = l2->next;
            }
            sum = sum + carry;
            carry = sum/10;
            //insertattail(c,sum%10);
            if(ans==NULL)
            {
             ans= new ListNode(sum%10);
                res=ans;
            }
            else
            {
                ans->next=new ListNode(sum%10);
                ans=ans->next;
            }
        }
        
        return res;  
    }
};