import heapq
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        ans =0
        arr = [-x for x in nums]
        heapq.heapify(arr)
        for i in range(0,k-1):
            heapq.heappop(arr)
        return -arr[0]