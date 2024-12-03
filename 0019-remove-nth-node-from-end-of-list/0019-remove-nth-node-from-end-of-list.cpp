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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        int nod = cnt - n + 1;
        if (head == NULL) return head;
        if (nod == 1) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int chk = 0;
        temp = head;
        ListNode *prev = nullptr;
        while (temp != NULL) {
            chk++;
            if (chk == nod) {
                prev->next = temp->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};