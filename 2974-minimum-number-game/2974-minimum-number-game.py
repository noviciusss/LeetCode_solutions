from heapq import heapify,heappop
class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        heapify(nums)
        res = []
        while nums:
            fir = heappop(nums)
            sec = heappop(nums)

            res.append(sec)
            res.append(fir)
        return res