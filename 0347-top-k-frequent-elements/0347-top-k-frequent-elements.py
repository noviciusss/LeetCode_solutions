from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        cnt = Counter(nums)
        ans  = [ele for ele,v in cnt.most_common(k)]
        return ans