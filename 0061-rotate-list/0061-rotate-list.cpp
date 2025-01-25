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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode *temp=head;
        int cnt=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            cnt++;
        }
        k = k%cnt;
        if(k==0){return head;}
        for(int i=0;i<k;i++){
                ListNode* chk= head;
                ListNode* prev = nullptr;
                while(chk->next!=nullptr){
                    prev=chk;
                    chk=chk->next;
                }
                prev->next=nullptr;
                chk->next=head;
                head=chk;
        
        }return head;
    }
};