class Solution:
    def isGood(self, nums: List[int]) -> bool:
        nums.sort()
        n = len(nums)-1
        for i in range(n):
            if nums[i]!=i+1:
                return False
        if n==nums[n-1] and n==nums[n]:
            return True
        return False
        