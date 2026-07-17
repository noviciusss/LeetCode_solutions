import heapq
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        ans = 0
        num = [-x for x in nums]
        heapq.heapify(num)
        for i in range(k-1):
            heapq.heappop(num)
        return -(num[0])