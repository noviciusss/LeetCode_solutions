class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [0]*n
        for i in range(n):
            ans[i] = sum(nums[:i+1])
        return ans