class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)-1
        return ((nums[n]-1)*(nums[n-1]-1))
