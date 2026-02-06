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
    private:
        ListNode* sortedMerge(ListNode* &head1, ListNode* &head2){
            ListNode* curr1=head1;
            ListNode* curr2 =head2;
            ListNode* next1 = head1->next;
            ListNode* next2 = head2-> next;
            while(next1!=NULL && curr2!=NULL){
                if(curr2->val>=curr1->val && curr2->val<=next1->val){
                    //in-between insertion
                    curr2->next=next1;
                    curr1->next=curr2;

                    //pointer repositioning
                    curr1=curr1->next;

                    head2=next2;
                    curr2=head2;
                    if(next2!=NULL)
                        next2=next2->next;
                    

                }else{
                    curr1=curr1->next;
                    next1=next1->next;
                }
            }

            if(next1==NULL && curr2==NULL){
                return head1;
            }
            if(curr2==NULL){
                return head1;
            }
            if(next1==NULL){
                curr1->next=head2;
                return head1;
            }

           return head2;
        }

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==NULL &&list2 ==NULL){
            return list1;
        }
        if(list1==NULL){
            return list2;
        }else if(list2==NULL)
                    return list1;

        if(list1->val<list2->val){
            ListNode* new1=sortedMerge(list1,list2);
            return new1;
        }else{
            ListNode* new2=sortedMerge(list2,list1);
            return new2;

        }
        // return new1;
    }
};