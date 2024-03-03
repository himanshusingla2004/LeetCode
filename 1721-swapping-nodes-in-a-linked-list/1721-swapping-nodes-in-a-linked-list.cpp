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
        if(head->next==NULL)return head;
        
        ListNode* temp=head;
        int cnt = 0;
        ListNode*fir;
        while(temp != NULL)
        {
            cnt++;
         if(cnt==k){
             fir = temp;
         }
        temp=temp->next;
        }
        int j=cnt-k+1;
        cnt=1;
        temp=head;
        while(cnt!=j)
            temp=temp->next,cnt++;
        swap(fir->val,temp->val);
        return head;
    }
};