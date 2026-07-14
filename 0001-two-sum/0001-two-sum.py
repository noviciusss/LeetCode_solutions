class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for index,num in enumerate(nums):
            tar = target-num
            if tar in seen:
                return [seen[tar],index]
            seen[num] = index
        return [-1,-1]