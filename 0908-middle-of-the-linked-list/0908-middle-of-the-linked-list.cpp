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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp =head;
        int cnt=0;
        while(temp!=NULL){
            cnt+=1;
            temp=temp->next;
        }
        int mdnd = (cnt/2)+1;
        ListNode * temp1=head;
        while(temp1!=NULL){
            mdnd -=1;
            if(mdnd==0){
                break;
            }
            temp1=temp1->next;
        }
        return temp1;
    }
};