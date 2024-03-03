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
    void reorderList(ListNode* head) {
        
        ListNode* temp = head;int i=0;
        vector<ListNode*> vec;
        while(temp!=NULL){
            vec.push_back(temp);
            temp=temp->next;
        }
        int n=vec.size();
        if(n==1)return;
        for( i=0;i<n/2;i++){
            if(i==0){
                temp=vec[i];
                temp->next=vec[n-i-1];
                temp=temp->next;
            }
            else{
                temp->next=vec[i];
                temp=temp->next;
                temp->next = vec[n-i-1];
                temp=temp->next;
            }
        }
        if(n%2==1){
            temp->next = vec[i];
            temp=temp->next;
        }
        temp->next=NULL;
    }
};