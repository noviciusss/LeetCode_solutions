class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:

        for i in range(1,len(nums)+2):
            chk = k*i
            if chk not in nums:
                return chk
        return k
            