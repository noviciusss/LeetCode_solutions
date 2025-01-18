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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        while(temp->next!=NULL){
            ListNode *news = new ListNode(gcd(temp->val,temp->next->val));
            news->next=temp->next;
            temp->next=news;
            temp=temp->next->next;
        }return head;
    }
};