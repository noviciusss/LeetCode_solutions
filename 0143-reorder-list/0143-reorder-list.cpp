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
    void reorderList(ListNode* head) {
        //first find midddle
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast &&fast->next){
            slow =slow->next;
            fast =fast->next->next;
        } 
        //rotate
        ListNode* secondHalf = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        ListNode* temp = secondHalf; 
        while(temp){
            ListNode* nextf = temp->next;
            temp->next = prev;
            prev=temp;
            temp = nextf;
        }
        //merge
        ListNode* firsthalfcur = head;
        ListNode* secondhalfcur= prev;
        while(secondhalfcur){
            ListNode* firstNext = firsthalfcur->next;
            ListNode* secondNext = secondhalfcur->next;
            firsthalfcur->next = secondhalfcur;
            secondhalfcur->next=firstNext;

            firsthalfcur = firstNext;
            secondhalfcur = secondNext;
        }

    }
};