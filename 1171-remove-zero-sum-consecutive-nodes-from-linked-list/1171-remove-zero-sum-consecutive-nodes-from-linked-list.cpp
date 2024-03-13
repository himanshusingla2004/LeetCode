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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> mp;
        int currSum=0;
        ListNode *temp = new ListNode(0,head);
        mp[0]=temp;
        while(head!=NULL){
            currSum+=head->val;
            mp[currSum]=head;
            head=head->next;
        }
        head=temp;
        currSum=0;
        while(head!=NULL){
            currSum+=head->val;
            head->next=mp[currSum]->next;
            head=head->next;
        }
            return temp->next;
    }
};