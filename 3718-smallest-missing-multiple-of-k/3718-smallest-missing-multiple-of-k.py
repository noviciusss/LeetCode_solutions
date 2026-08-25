class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        if len(nums)==1 and k==nums[0]:
            return nums[0]*2
        for i in range(1,len(nums)+2):
            chk = k*i
            if chk not in nums:
                return chk
            
        return k
            