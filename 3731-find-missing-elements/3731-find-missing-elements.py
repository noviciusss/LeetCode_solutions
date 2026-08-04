class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        ans = []
        n = 0
        m = min(nums)
        ma = max(nums)
        for i in range(m,ma):
            if i in nums:
                n = i
            else:
                ans.append(i)
        return ans