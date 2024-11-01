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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode* prev = nullptr;
        ListNode* current = head;
        
        while (current) {
            ListNode* nextTemp = current->next;
            
            current->next = prev;
            
            prev = current;
            current = nextTemp;
        }
        
        return prev;
    }
};

ListNode* createList(std::vector<int> values) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}

