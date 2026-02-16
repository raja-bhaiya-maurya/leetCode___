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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,digit=0,carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2; 
        ListNode* newnode= new ListNode(-1);
        ListNode* head= newnode;
        ListNode* temp=head;
        while(temp1!=NULL||temp2!=NULL){
            if(temp1==NULL)  {sum=0+temp2->val+carry;
            temp2=temp2->next;}
            else if(temp2==NULL) {sum=temp1->val+0+carry;
             temp1=temp1->next;}
            else {sum=temp1->val+temp2->val+carry;
            temp1=temp1->next;temp2=temp2->next;
            }
            digit=sum%10;
            carry=sum/10;
            ListNode* newnode1= new ListNode(digit);
            temp->next=newnode1;
            temp=temp->next;
        }
        if(carry>0){
             ListNode* newnode1= new ListNode(carry);
            temp->next=newnode1;
        }

return head->next;
    }
};