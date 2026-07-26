class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        ans = nums[n-1]*nums[n-2]*nums[n-3]
        ans1 = nums[n-1]*nums[0]*nums[1]
        return max(ans,ans1)