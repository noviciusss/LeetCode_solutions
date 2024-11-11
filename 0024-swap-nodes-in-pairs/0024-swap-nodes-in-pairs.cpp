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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* dummy = new ListNode(0);//here we define prev to use in code
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* next = head->next;
        int count = 0;
        while (curr != nullptr && next != nullptr) {
            prev->next = next; //swaping is happening here same as other method useing
            curr->next = next->next;
            next->next = curr;
            prev = curr;
            curr = curr->next;
            if (curr != nullptr) {
                next = curr->next;
            } else {
                next = nullptr;
            }
            count++;
        }
        return dummy->next;
    }
};