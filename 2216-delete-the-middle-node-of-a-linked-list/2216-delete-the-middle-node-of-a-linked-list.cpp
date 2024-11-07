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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=0;
        ListNode* temp= head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mdl= (cnt/2);
        if(cnt==1) return nullptr;
        temp=head;
        ListNode* prev = nullptr;
        while(mdl--){
          prev=temp;
          temp=temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};