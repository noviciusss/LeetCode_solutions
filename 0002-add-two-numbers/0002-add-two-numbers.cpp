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
        ListNode* dummy = new ListNode(-1);
        ListNode * cpy = dummy;
        ListNode * temp1= l1;
        ListNode* temp2=l2;
        int caary=0;
        while(temp1!=NULL||temp2!=NULL){
            int sum=caary;
            if(temp1) {sum +=temp1->val;}
            if(temp2){sum +=temp2->val;}
            ListNode* newNode= new ListNode(sum%10);
            caary=sum/10;

            cpy->next=newNode;
            cpy=cpy->next;

            if(temp1) {temp1=temp1->next;}
            if(temp2) {temp2=temp2->next;}
        }
        if(caary){
            ListNode *newNode = new ListNode(caary);
            cpy->next=newNode;
        } 
        return dummy->next;
             
    }
};