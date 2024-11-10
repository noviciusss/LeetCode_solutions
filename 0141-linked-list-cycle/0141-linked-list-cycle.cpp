/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) { 
        //Cheking next = next->next;
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode * temp=head;
        ListNode * temp1=head;
        while(temp1!=NULL && temp1->next!=NULL){
            temp=temp->next;
            temp1=temp1->next->next;

            if(temp==temp1){
                return true;
            }
        }
        return false;
    }
};