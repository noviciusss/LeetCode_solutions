from collections import Counter
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        cnt = Counter(nums)
        dupl = -1
        miss = -1 
        n = len(nums)
        for i in range(1,n+1):
            if cnt[i]==2:
                dupl = i
            elif cnt[i]==0:
                miss = i

        return [dupl,miss]