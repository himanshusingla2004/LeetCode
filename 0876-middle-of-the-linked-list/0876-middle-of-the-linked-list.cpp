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
ListNode* getmiddle(ListNode* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
int getLen(ListNode* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

    ListNode* middleNode(ListNode* head) {
    //     int len=getLen(head);
    //     int ans=len/2;
    // while(ans){
    //  head=head->next;
    //     ans--;
    // }
    // return head;

    //2nd method
    return getmiddle(head);
    }
};