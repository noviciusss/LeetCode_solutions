from collections import Counter
class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        n = len(nums)
        c = Counter(nums)       
        ans = -1
        if k==1:
            for num,fre in c.items():
                if fre==1:
                    ans = max(ans,num)
            return ans

        if k ==n:
            return max(nums)
        if 0<k<n:
           if c[nums[0]]== 1:
            ans = max(ans,nums[0])
           if c[nums[n-1]]==1:
            ans = max(ans,nums[n-1])
        return ans