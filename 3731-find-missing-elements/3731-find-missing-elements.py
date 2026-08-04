class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        ans = []
        m = min(nums)
        ma = max(nums)
        for i in range(m,ma):
            if i not in nums:
                ans.append(i)
        return ans