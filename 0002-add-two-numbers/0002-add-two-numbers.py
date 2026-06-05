# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        tail = dummy
        chk1 = l1
        chk2 = l2 
        carry = 0
        while(chk1 or chk2):
            sumi = carry
            if chk1 :
                sumi+=chk1.val
            if chk2:
                sumi +=chk2.val
            tail.next = ListNode(sumi%10)
            carry = sumi//10
            tail = tail.next
            if chk1 :
                chk1=chk1.next
            if chk2: 
                chk2=chk2.next

        if carry:
            tail.next = ListNode(carry)
        return dummy.next
