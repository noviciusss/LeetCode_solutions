# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # so we are using two poiter and gap algo for this it means fast move till none and maintain n gaps so when we reach it then slow next is candidate

        dummy = ListNode(next=head) # in case of n = 1
        fast = dummy
        slow= dummy
        for _ in range(n):
            fast = fast.next
        while(fast.next !=None):
            slow = slow.next
            fast = fast.next
        slow.next = slow.next.next
        return dummy.next