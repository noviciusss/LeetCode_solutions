class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        n = len(nums)
        # ans = [0]*n
        # for i in range(n):
        #     ans[i] = sum(nums[:i+1])
        # return ans
        prefix_sum = [0]*n
        prefix_sum[0]= nums[0]
        for i in range(1,n):
            prefix_sum[i]=prefix_sum[i-1]+nums[i]
        return prefix_sum