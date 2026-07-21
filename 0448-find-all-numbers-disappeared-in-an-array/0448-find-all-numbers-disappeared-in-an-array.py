from collections import Counter
class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans = []
        cnt = Counter(nums)
        n =len(nums)
        for i in range(1,n+1):
            if cnt[i]==0:
                ans.append(i)
        return ans