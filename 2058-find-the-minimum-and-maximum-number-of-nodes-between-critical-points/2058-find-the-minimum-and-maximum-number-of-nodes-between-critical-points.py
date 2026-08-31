# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        temp = head
        maxi = -1
        mini = 10**5
        curr = head
        cnt = 0
        i = 1
        arr = []
        while curr and curr.next.next:
            if curr.next.val>curr.val and curr.next.val>curr.next.next.val:
                cnt+=1
                arr.append(i)
            if curr.next.val<curr.val and curr.next.val<curr.next.next.val:
                cnt+=1
                arr.append(i)
            curr = curr.next
            i+=1
        if cnt<2:
            return [-1,-1]
        for i in range(1,len(arr)):
            diff = arr[i]-arr[i-1]
            mini = min(mini,diff)
        maxi = arr[-1]-arr[0]
        return [mini,maxi]

        
            
