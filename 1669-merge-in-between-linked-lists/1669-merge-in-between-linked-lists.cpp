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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tail2=list2;
        while(tail2->next!=NULL){
            tail2=tail2->next;
        }
        ListNode* temp=list1;
        b-=a;
        a--;
        while(a--)   temp=temp->next;
        ListNode* temp2=temp->next;
        while(b--)temp2=temp2->next;
        temp2=temp2->next;
        temp->next=list2;
        tail2->next=temp2;
        return list1;
    }
};