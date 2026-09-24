from itertools import combinations
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        arr = []
        for i in range(0,len(nums)+1):
            arr.extend(combinations(nums,i))
        return arr