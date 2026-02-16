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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head;
         ListNode* tail=NULL;
        int count=0;
        while(temp!=NULL){
             if(temp->next==NULL) tail=temp;
            temp=temp->next;
            count++;
           
        }
        int rotate=count-(k%count);
        temp=head;
    while(rotate-->0){
        head=head->next;
        tail->next=temp;
        temp->next=nullptr;
        tail=tail->next;
        temp=head;
        
    }
        return head;
    }
};