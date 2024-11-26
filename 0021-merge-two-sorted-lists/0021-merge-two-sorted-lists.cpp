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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // vector<int>arr;

        // ListNode* temp1=list1;
        // while(temp1!=NULL){
        //     arr.push_back(temp1->val);
        //     temp1=temp1->next;
        // }
        // ListNode* temp2=list;
        // while(temp2!=NULL){
        //     arr.push_back(temp2->val);
        //     temp2=temp2->next;
        // }
        // sort(arr.begin(),arr.end());
        // ListNode* head = NULL;
        // ListNode* current = NULL;
        // for (int val : arr) {
        //     if (head == NULL) {
        //         head = new ListNode(val);
        //         current = head;
        //     } else {
        //         current->next = new ListNode(val);
        //         current = current->next;
        //     }
        // }return head;
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        if (list1) {
            current->next = list1;
        }
        if (list2) {
            current->next = list2;
        }
        return dummy->next;
    }
};