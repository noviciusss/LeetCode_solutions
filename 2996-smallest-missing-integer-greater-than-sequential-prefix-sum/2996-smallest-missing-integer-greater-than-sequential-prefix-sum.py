class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        chk = nums[0]
        for i in range(1,len(nums)):
            if nums[i] == nums[i-1]+1:
                chk+=nums[i]
            else:
                break 
        for i in nums:
            if chk not in nums:
                return chk
            else: chk+=1
        return chk