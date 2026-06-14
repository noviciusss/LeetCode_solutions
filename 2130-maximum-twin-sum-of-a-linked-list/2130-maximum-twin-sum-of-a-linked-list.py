# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        fast = head
        slow = head
        while fast and fast.next:
            fast = fast.next.next
            slow =slow.next
        prev = None
        curr =slow
        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        first_half = head
        second_half = prev
        max_sum = 0
        while second_half:
            max_sum = max(max_sum,first_half.val+second_half.val)
            first_half = first_half.next
            second_half = second_half.next

        return max_sum
