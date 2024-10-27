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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        
        ListNode* temp = head;
        ListNode* prev = NULL;  

        while(temp != NULL){
            if(temp->val == val){
                if(prev == NULL) { 
                    head = temp->next;
                    delete temp;
                    temp = head; } 
                    else {
                    prev->next = temp->next;
                    ListNode* toDelete = temp;
                    temp = temp->next;
                    delete toDelete;}} 
                    else {
                prev = temp;
                temp = temp->next;} }
        return head;
    }
};