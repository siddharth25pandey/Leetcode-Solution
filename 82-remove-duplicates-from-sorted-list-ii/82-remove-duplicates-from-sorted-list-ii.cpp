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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>m;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            m[ptr->val]++;
            ptr=ptr->next;
        }
        /*for(auto i:m)
        {
            cout <<i.first<<" "<<i.second<<endl;
        }*/
        ListNode* ans= NULL;
        for(auto i:m)
        {   
            if(i.second==1)
            insertattail(ans,i.first);
        }
       
        return ans;
    }
};