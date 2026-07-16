import math
class Solution:
    def gcdSum(self, nums: list[int]) -> int:
        maxi = 0
        n = len(nums)
        ans = []
        for i in nums:
            maxi = max(maxi,i)
            ans.append(math.gcd(i,maxi))
        ans.sort()
        chk = 0
        for i in range(n//2):
            chk+=math.gcd(ans[i],ans[n-1-i])
        return chk
